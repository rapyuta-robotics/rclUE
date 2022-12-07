// Copyright 2020 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW_DDS_COMMON__GRAPH_CACHE_HPP_
#define RMW_DDS_COMMON__GRAPH_CACHE_HPP_

#include <functional>
#include <map>
#include <mutex>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "rcutils/logging_macros.h"

#include "rmw/names_and_types.h"
#include "rmw/topic_endpoint_info.h"
#include "rmw/topic_endpoint_info_array.h"
#include "rmw/types.h"

#include "rmw_dds_common/gid_utils.hpp"
#include "rmw_dds_common/visibility_control.h"
#include "rmw_dds_common/msg/gid.hpp"
#include "rmw_dds_common/msg/node_entities_info.hpp"
#include "rmw_dds_common/msg/participant_entities_info.hpp"

namespace rmw_dds_common
{

// Forward-declaration, defined at end of file.
struct EntityInfo;
struct ParticipantInfo;

/// Graph cache data structure.
/**
 * Manages relationships between participants, nodes, and topics.
 */
class GraphCache
{
  friend
  RMW_DDS_COMMON_PUBLIC
  std::ostream &
  operator<<(std::ostream & ostream, const GraphCache & topic_cache);

public:
  /// Set a callback that will be called when the state of the object changes.
  /**
   * \param callback callback to be called.
   */
  template<typename CallbackT>
  void
  set_on_change_callback(CallbackT && callback)
  {
    std::lock_guard<std::mutex> lock(mutex_);
    on_change_callback_ = callback;
  }

  /// Clear previously registered "on change" callback.
  RMW_DDS_COMMON_PUBLIC
  void
  clear_on_change_callback();

  /**
   * \defgroup dds_discovery_api dds_discovery_api
   * Methods used to update the Graph Cache based on DDS discovery.
   * @{
   */

  /// Add a data writer.
  /**
   * \param writer_gid GUID of the data writer.
   * \param topic_name Name of the DDS topic for this data writer.
   * \param type_name Type name of the DDS topic for this data writer.
   * \param participant_gid GUID of the participant.
   * \param qos QoS profile of the data writer.
   * \return `true` if the cache was updated, `false` if the data writer
   *   was already present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  add_writer(
    const rmw_gid_t & writer_gid,
    const std::string & topic_name,
    const std::string & type_name,
    const rmw_gid_t & participant_gid,
    const rmw_qos_profile_t & qos);

  /// Add a data reader based on discovery.
  /**
   * \param reader_gid GUID of the The data reader.
   * \param topic_name Name of the DDS topic for this data reader.
   * \param type_name Type name of the DDS topic for this data reader.
   * \param participant_gid GUID of the participant.
   * \param qos QoS profile of the data reader.
   * \return `true` if the cache was updated, `false` if the data reader
   *   was already present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  add_reader(
    const rmw_gid_t & reader_gid,
    const std::string & topic_name,
    const std::string & type_name,
    const rmw_gid_t & participant_gid,
    const rmw_qos_profile_t & qos);

  /// Add a data reader or writer.
  /**
   * \param gid GUID of the entity.
   * \param topic_name Name of the DDS topic for this data reader.
   * \param type_name Type name of the DDS topic for this entity
   * \param participant_gid GUID of the participant.
   * \param qos QoS profile of the entity.
   * \param is_reader Whether the entity is a data reader or a writer.
   * \return `true` if the cache was updated, `false` if the entity
   *   was already present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  add_entity(
    const rmw_gid_t & gid,
    const std::string & topic_name,
    const std::string & type_name,
    const rmw_gid_t & participant_gid,
    const rmw_qos_profile_t & qos,
    bool is_reader);

  /// Remove a data writer.
  /**
   * \param gid GUID of the data writer.
   * \return `true` if the cache was updated,
   *   `false` if the data writer was not present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  remove_writer(const rmw_gid_t & gid);

  /// Remove a data reader.
  /**
   * \param gid GUID of the The data reader.
   * \return `true` if the cache was updated,
   *   `false` if the data reader was not present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  remove_reader(const rmw_gid_t & gid);

  /// Remove a data reader or writer.
  /**
   * \param gid GUID of the entity.
   * \param is_reader Whether the entity is a data reader or a writer.
   * \return `true` when a the cache was upated, `false` if the entity
   *   was not present.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  remove_entity(const rmw_gid_t & gid, bool is_reader);

  /**
   * @}
   * \defgroup common_api common_api
   * Methods used to update the Graph Cache.
   * @{
   */

  /// Add a participant.
  /**
   * \param participant_gid GUID of the participant.
   * \param enclave Name of the enclave.
   */
  RMW_DDS_COMMON_PUBLIC
  void
  add_participant(
    const rmw_gid_t & participant_gid,
    const std::string & enclave);

  /// Remove a participant.
  /**
   * \param participant_gid GUID of the participant.
   * \return `true` when a change took place.
   */
  RMW_DDS_COMMON_PUBLIC
  bool
  remove_participant(const rmw_gid_t & participant_gid);

  /**
   * @}
   * \defgroup ros_discovery_api ros_discovery_api
   * Methods used to update the Graph Cache based on ROS 2 specific messages received from
   * remote participants.
   * @{
   */

  /// Update cached participant info from a `ParticipantEntitiesInfo` message.
  /**
   * \param msg participant info to update cache from.
   */
  RMW_DDS_COMMON_PUBLIC
  void
  update_participant_entities(const rmw_dds_common::msg::ParticipantEntitiesInfo & msg);

  /**
   * @}
   * \defgroup local_api local_api
   * Methods used to update the Graph Cache, based on local construction and destruction of entities.
   * All of these methods return a `ParticipantEntitiesInfo` message describing the local participant
   * state. This message can be used to update remote caches kept by remote participants.
   * \see rmw_dds_common::GraphCache::update_participant_entities.
   * @{
   */

  /// Add a node to the graph.
  /**
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the node to be added.
   * \param node_namespace Namespace of the node to be added.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  add_node(
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /// Remove a node from the graph.
  /**
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the node to be removed.
   * \param node_namespace Namespace of the node to be removed.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  remove_node(
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /// Associate a data writer with a node.
  /**
   * \param writer_gid GUID of the data writer.
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the target node.
   * \param node_namespace Namespace of the target node.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  associate_writer(
    const rmw_gid_t & writer_gid,
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /// Dissociate a data writer from a node.
  /**
   * \param writer_gid GUID of the data writer.
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the target node.
   * \param node_namespace Namespace of the target node.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  dissociate_writer(
    const rmw_gid_t & writer_gid,
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /// Associate a data reader with a node.
  /**
   * \param reader_gid GUID of the data reader.
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the target node.
   * \param node_namespace Namespace of target node.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  associate_reader(
    const rmw_gid_t & reader_gid,
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /// Dissociate a data reader from a node.
  /**
   * \param reader_gid GUID of the data reader.
   * \param participant_gid GUID of the participant.
   * \param node_name Name of the target node.
   * \param node_namespace Namespace of target node.
   * \return Message to update other caches.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_dds_common::msg::ParticipantEntitiesInfo
  dissociate_reader(
    const rmw_gid_t & reader_gid,
    const rmw_gid_t & participant_gid,
    const std::string & node_name,
    const std::string & node_namespace);

  /**
   * @}
   * \defgroup introspection_api introspection_api
   * Methods used to introspect the GraphCache.
   * @{
   */

  /// Get the number of data writers for a DDS topic.
  /**
   * \param[in] topic_name Name of the DDS topic.
   * \param[out] count Number of data writers.
   *
   * \return RMW_RET_INVALID_ARGUMENT if count is `nullptr`, or
   * \return RMW_RET_ERROR if an unexpected error take place, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_writer_count(
    const std::string & topic_name,
    size_t * count) const;

  /// Get the number of data readers for a DDS topic.
  /**
   * \param[in] topic_name Name of the DDS topic.
   * \param[out] count Number of data readers.
   *
   * \return RMW_RET_INVALID_ARGUMENT if count is `nullptr`, or
   * \return RMW_RET_ERROR if an unexpected error take place, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_reader_count(
    const std::string & topic_name,
    size_t * count) const;

  /// Callable used to demangle a name.
  using DemangleFunctionT = std::function<std::string(const std::string &)>;

  /// Get an array with information about the data writers for a DDS topic.
  /**
   * \param[in] topic_name Name of the DDS topic.
   * \param[in] demangle_type Function to demangle DDS topic type names.
   * \param[in] allocator To allocate memory when populating `endpoints_info`.
   * \param[out] endpoints_info A zero initialized topic endpoint information
   *   array to be populated with data writers' info.
   *
   * \return RMW_RET_INVALID_ARGUMENT if count is `nullptr`, or
   * \return RMW_RET_ERROR if an unexpected error take place, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_writers_info_by_topic(
    const std::string & topic_name,
    DemangleFunctionT demangle_type,
    rcutils_allocator_t * allocator,
    rmw_topic_endpoint_info_array_t * endpoints_info) const;

  /// Get an array with information about the data readers for a DDS topic.
  /**
   * \param[in] topic_name Name of the DDS topic.
   * \param[in] demangle_type Function to demangle DDS topic type names.
   * \param[in] allocator To allocate memory when populating `endpoints_info`.
   * \param[out] endpoints_info A zero initialized topic endpoint information
   *   array to be populated with data readers' info.
   *
   * \return RMW_RET_INVALID_ARGUMENT if count is `nullptr`, or
   * \return RMW_RET_ERROR if an unexpected error take place, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_readers_info_by_topic(
    const std::string & topic_name,
    DemangleFunctionT demangle_type,
    rcutils_allocator_t * allocator,
    rmw_topic_endpoint_info_array_t * endpoints_info) const;

  /// Get all topic names and types.
  /**
   * \param[in] demangle_topic Function to demangle DDS topic names.
   * \param[in] demangle_type Function to demangle DDS topic type names.
   * \param[in] allocator To allocate memory when populating `topic_names_and_types`.
   * \param[inout] topic_names_and_types A zero initialized names and types collection
   *   to be populated with the result.
   *
   * \return RMW_RET_INVALID_ARGUMENT if an argument is invalid, or
   * \return RMW_RET_BAD_ALLOC if an allocation failed, or
   * \return RMW_RET_ERROR if an unexpected error happened, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_names_and_types(
    DemangleFunctionT demangle_topic,
    DemangleFunctionT demangle_type,
    rcutils_allocator_t * allocator,
    rmw_names_and_types_t * topic_names_and_types) const;

  /// Get topic names and types for all data writers associated to a node.
  /**
   * \param[in] node_name Name of the node.
   * \param[in] namespace_ Namespace of the node.
   * \param[in] demangle_topic Function to demangle DDS topic names.
   * \param[in] demangle_type Function to demangle DDS topic type names.
   * \param[in] allocator To allocate memory when populating `topic_names_and_types`.
   * \param[inout] topic_names_and_types A zero initialized names and types collection
   *   to be populated with the result.
   *
   * \return RMW_RET_NODE_NAME_NON_EXISTENT if the node doesn't exist, or
   * \return RMW_RET_INVALID_ARGUMENT if an argument is invalid, or
   * \return RMW_RET_BAD_ALLOC if an allocation failed, or
   * \return RMW_RET_ERROR if an unexpected error happened, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_writer_names_and_types_by_node(
    const std::string & node_name,
    const std::string & namespace_,
    DemangleFunctionT demangle_topic,
    DemangleFunctionT demangle_type,
    rcutils_allocator_t * allocator,
    rmw_names_and_types_t * topic_names_and_types) const;

  /// Get the topic names and types for all data readers associated to a node.
  /**
   * \param[in] node_name Name of the node.
   * \param[in] namespace_ Namespace of the node.
   * \param[in] demangle_topic Function to demangle DDS topic names.
   * \param[in] demangle_type Function to demangle DDS topic type names.
   * \param[in] allocator To allocate memory when populating `topic_names_and_types`.
   * \param[inout] topic_names_and_types A zero initialized names and types collection
   *   to be populated with the result.
   *
   * \return RMW_RET_NODE_NAME_NON_EXISTENT if the node doesn't exist, or
   * \return RMW_RET_INVALID_ARGUMENT if an argument is invalid, or
   * \return RMW_RET_BAD_ALLOC if an allocation failed, or
   * \return RMW_RET_ERROR if an unexpected error happened, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_reader_names_and_types_by_node(
    const std::string & node_name,
    const std::string & namespace_,
    DemangleFunctionT demangle_topic,
    DemangleFunctionT demangle_type,
    rcutils_allocator_t * allocator,
    rmw_names_and_types_t * topic_names_and_types) const;

  /// Get the number of nodes that have been discovered.
  RMW_DDS_COMMON_PUBLIC
  size_t
  get_number_of_nodes() const;

  /// Get the names, namespaces, and enclaves of all nodes.
  /**
   * \param[inout] node_names A zero initialized string array to be populated with node names.
   * \param[inout] node_namespaces A zero initialized string array to be populated with node
   *   namespaces. Each item in this array corresponds to the item at the same position in
   *   `node_names`.
   * \param[inout] enclaves A zero initialized string array to be populated with node
   *   enclaves. Each item in this array corresponds to the item at the same position in
   *   `node_names`. If `nullptr`, it will be ignored.
   * \param[in] allocator To allocate memory when populating `node_names`, `node_namespaces`,
   *   and `enclaves`.
   * \return RMW_RET_INVALID_ARGUMENT if an argument is invalid, or
   * \return RMW_RET_BAD_ALLOC if an allocation failed, or
   * \return RMW_RET_ERROR if an unexpected error occurred, or
   * \return RMW_RET_OK.
   */
  RMW_DDS_COMMON_PUBLIC
  rmw_ret_t
  get_node_names(
    rcutils_string_array_t * node_names,
    rcutils_string_array_t * node_namespaces,
    rcutils_string_array_t * enclaves,
    rcutils_allocator_t * allocator) const;

  /**
   * @}
   */

  /// \internal
  /// Sequence of NodeEntitiesInfo messages.
  using NodeEntitiesInfoSeq =
    decltype(std::declval<rmw_dds_common::msg::ParticipantEntitiesInfo>().node_entities_info_seq);
  /// \internal
  /// Map from endpoint gids to endpoints discovery info.
  using EntityGidToInfo = std::map<rmw_gid_t, EntityInfo, Compare_rmw_gid_t>;
  /// \internal
  /// Map from participant gids to participant discovery info.
  using ParticipantToNodesMap = std::map<rmw_gid_t, ParticipantInfo, Compare_rmw_gid_t>;
  /// \internal
  /// Sequence of endpoints gids.
  using GidSeq =
    decltype(std::declval<rmw_dds_common::msg::NodeEntitiesInfo>().writer_gid_seq);

private:
  EntityGidToInfo data_writers_;
  EntityGidToInfo data_readers_;
  ParticipantToNodesMap participants_;
  std::function<void()> on_change_callback_ = nullptr;

  mutable std::mutex mutex_;
};

RMW_DDS_COMMON_PUBLIC
std::ostream &
operator<<(std::ostream & ostream, const GraphCache & topic_cache);

/// Structure to represent the discovery data of a Participant.
struct ParticipantInfo
{
  /// Discovery information of each Node created from a Participant.
  GraphCache::NodeEntitiesInfoSeq node_entities_info_seq;
  /// Name of the enclave.
  std::string enclave;
};

/// Structure to represent the discovery data of an endpoint (data reader or writer).
struct EntityInfo
{
  /// Topic name.
  std::string topic_name;
  /// Topic type.
  std::string topic_type;
  /// Participant gid.
  rmw_gid_t participant_gid;
  /// Quality of service of the topic.
  rmw_qos_profile_t qos;

  /// Simple constructor.
  EntityInfo(
    const std::string & topic_name,
    const std::string & topic_type,
    const rmw_gid_t & participant_gid,
    const rmw_qos_profile_t & qos)
  : topic_name(topic_name),
    topic_type(topic_type),
    participant_gid(participant_gid),
    qos(qos)
  {}
};

}  // namespace rmw_dds_common

#endif  // RMW_DDS_COMMON__GRAPH_CACHE_HPP_
