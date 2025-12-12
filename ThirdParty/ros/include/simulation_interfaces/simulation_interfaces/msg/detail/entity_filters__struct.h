// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filter'
#include "rosidl_runtime_c/string.h"
// Member 'categories'
#include "simulation_interfaces/msg/detail/entity_category__struct.h"
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__struct.h"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.h"

/// Struct defined in msg/EntityFilters in the package simulation_interfaces.
/**
  * A set of filters to apply to entity queries. See GetEntities, GetEntitiesStates.
 */
typedef struct simulation_interfaces__msg__EntityFilters
{
  /// Optional, defaults to empty. Return entities with matching names.
  /// Entity names are matched with the filter regular expression.
  /// An empty filter will result in all entities being returned.
  /// The regular expression syntax is POSIX Extended,
  /// see https://pubs.opengroup.org/onlinepubs/9799919799/ definitions.
  /// Applies together with other filters (categories, tags).
  rosidl_runtime_c__String filter;
  /// Optional, defaults to empty, which means no category filter.
  /// Entities matching any of the categories will be returned.
  /// To get entity category, use GetEntityInfo.
  /// Applies together with other filters (filter, tags).
  /// Check ENTITY_CATEGORIES in GetSimulatorFeatures to determine if
  /// your simulator supports entity categories.
  simulation_interfaces__msg__EntityCategory__Sequence categories;
  /// Tags filter to apply. To get entity tags, use GetEntityInfo.
  /// Applies together with other filters (filter, categories).
  /// Check support for this feature (ENTITY_TAGS) in GetSimulationFeatures.
  simulation_interfaces__msg__TagsFilter tags;
  /// if bounds are not empty, the overlap filter is applied
  /// and entities overlapping with bounds will be returned.
  /// Note that not all bound types might be supported by the simulator,
  /// though at least TYPE_SPHERE needs to be supported.
  /// Check ENTITY_BOUNDS_BOX and ENTITY_BOUNDS_CONVEX in GetSimulationFeatures
  /// to determine whether your simulator supports other bound types.
  /// If service is called with filter bounds set to an unsupported type,
  /// a FEATURE_UNSUPPORTED result will be returned.
  simulation_interfaces__msg__Bounds bounds;
} simulation_interfaces__msg__EntityFilters;

// Struct for a sequence of simulation_interfaces__msg__EntityFilters.
typedef struct simulation_interfaces__msg__EntityFilters__Sequence
{
  simulation_interfaces__msg__EntityFilters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__EntityFilters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_
