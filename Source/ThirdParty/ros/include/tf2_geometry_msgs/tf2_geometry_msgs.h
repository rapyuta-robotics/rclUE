/*
 * Copyright (c) 2008, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/** \author Wim Meeussen */

#ifndef TF2_GEOMETRY_MSGS_H
#define TF2_GEOMETRY_MSGS_H

#include <tf2/convert.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Transform.h>
#include <tf2_ros/buffer_interface.h>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <geometry_msgs/msg/quaternion_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/vector3_stamped.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <kdl/frames.hpp>

namespace tf2
{

/** \brief Convert a TransformStamped message to a KDL frame.
 * \param t TransformStamped message to convert.
 * \return The converted KDL Frame.
 */
inline
KDL::Frame gmTransformToKDL(const geometry_msgs::msg::TransformStamped& t)
  {
    return KDL::Frame(KDL::Rotation::Quaternion(t.transform.rotation.x, t.transform.rotation.y,
						t.transform.rotation.z, t.transform.rotation.w),
		      KDL::Vector(t.transform.translation.x, t.transform.translation.y, t.transform.translation.z));
  }


/********************/
/** Vector3Stamped **/
/********************/

/** \brief Extract a timestamp from the header of a Vector message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t VectorStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
  tf2::TimePoint getTimestamp(const geometry_msgs::msg::Vector3Stamped& t) {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Vector message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t VectorStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
  std::string getFrameId(const geometry_msgs::msg::Vector3Stamped& t) {return t.header.frame_id;}

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Vector type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The vector to transform, as a timestamped Vector3 message.
 * \param t_out The transformed vector, as a timestamped Vector3 message.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
  void doTransform(const geometry_msgs::msg::Vector3Stamped& t_in, geometry_msgs::msg::Vector3Stamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
  {
    KDL::Vector v_out = gmTransformToKDL(transform).M * KDL::Vector(t_in.vector.x, t_in.vector.y, t_in.vector.z);
    t_out.vector.x = v_out[0];
    t_out.vector.y = v_out[1];
    t_out.vector.z = v_out[2];
    t_out.header.stamp = transform.header.stamp;
    t_out.header.frame_id = transform.header.frame_id;
  }

/** \brief Trivial "conversion" function for Vector3 message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A Vector3Stamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::Vector3Stamped toMsg(const geometry_msgs::msg::Vector3Stamped& in)
{
  return in;
}

/** \brief Trivial "conversion" function for Vector3 message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A Vector3Stamped message.
 * \param out The input argument.
 */
inline
void fromMsg(const geometry_msgs::msg::Vector3Stamped& msg, geometry_msgs::msg::Vector3Stamped& out)
{
  out = msg;
}



/******************/
/** PointStamped **/
/******************/

/** \brief Extract a timestamp from the header of a Point message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t PointStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
  tf2::TimePoint getTimestamp(const geometry_msgs::msg::PointStamped& t)  {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Point message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t PointStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
  std::string getFrameId(const geometry_msgs::msg::PointStamped& t)  {return t.header.frame_id;}

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Point type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The point to transform, as a timestamped Point3 message.
 * \param t_out The transformed point, as a timestamped Point3 message.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
  void doTransform(const geometry_msgs::msg::PointStamped& t_in, geometry_msgs::msg::PointStamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
  {
    KDL::Vector v_out = gmTransformToKDL(transform) * KDL::Vector(t_in.point.x, t_in.point.y, t_in.point.z);
    t_out.point.x = v_out[0];
    t_out.point.y = v_out[1];
    t_out.point.z = v_out[2];
    t_out.header.stamp = transform.header.stamp;
    t_out.header.frame_id = transform.header.frame_id;
  }

/** \brief Trivial "conversion" function for Point message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A PointStamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::PointStamped toMsg(const geometry_msgs::msg::PointStamped& in)
{
  return in;
}

/** \brief Trivial "conversion" function for Point message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A PointStamped message.
 * \param out The input argument.
 */
inline
void fromMsg(const geometry_msgs::msg::PointStamped& msg, geometry_msgs::msg::PointStamped& out)
{
  out = msg;
}


/*****************/
/** PoseStamped **/
/*****************/

/** \brief Extract a timestamp from the header of a Pose message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t PoseStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
  tf2::TimePoint getTimestamp(const geometry_msgs::msg::PoseStamped& t)  {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Pose message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t PoseStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
  std::string getFrameId(const geometry_msgs::msg::PoseStamped& t)  {return t.header.frame_id;}

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Pose type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The pose to transform, as a timestamped Pose3 message.
 * \param t_out The transformed pose, as a timestamped Pose3 message.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
  void doTransform(const geometry_msgs::msg::PoseStamped& t_in, geometry_msgs::msg::PoseStamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
  {
    KDL::Vector v(t_in.pose.position.x, t_in.pose.position.y, t_in.pose.position.z);
    KDL::Rotation r = KDL::Rotation::Quaternion(t_in.pose.orientation.x, t_in.pose.orientation.y, t_in.pose.orientation.z, t_in.pose.orientation.w);

    KDL::Frame v_out = gmTransformToKDL(transform) * KDL::Frame(r, v);
    t_out.pose.position.x = v_out.p[0];
    t_out.pose.position.y = v_out.p[1];
    t_out.pose.position.z = v_out.p[2];
    v_out.M.GetQuaternion(t_out.pose.orientation.x, t_out.pose.orientation.y, t_out.pose.orientation.z, t_out.pose.orientation.w);
    t_out.header.stamp = transform.header.stamp;
    t_out.header.frame_id = transform.header.frame_id;
  }

/** \brief Trivial "conversion" function for Pose message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A PoseStamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::PoseStamped toMsg(const geometry_msgs::msg::PoseStamped& in)
{
  return in;
}

/** \brief Trivial "conversion" function for Pose message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A PoseStamped message.
 * \param out The input argument.
 */
inline
void fromMsg(const geometry_msgs::msg::PoseStamped& msg, geometry_msgs::msg::PoseStamped& out)
{
  out = msg;
}


/*******************************/
/** PoseWithCovarianceStamped **/
/*******************************/

/** \brief Extract a timestamp from the header of a Pose message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t PoseWithCovarianceStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
  tf2::TimePoint getTimestamp(const geometry_msgs::msg::PoseWithCovarianceStamped& t)  {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Pose message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t PoseWithCovarianceStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
  std::string getFrameId(const geometry_msgs::msg::PoseWithCovarianceStamped& t)  {return t.header.frame_id;}

/** \brief Extract a covariance matrix from a PoseWithCovarianceStamped message.
 * This function is a specialization of the getCovarianceMatrix template defined in tf2/convert.h.
 * \param t PoseWithCovarianceStamped message to extract the covariance matrix from.
 * \return A nested-array representation of the covariance matrix from the message.
 */
template <>
inline
  std::array<std::array<double, 6>, 6> getCovarianceMatrix(const geometry_msgs::msg::PoseWithCovarianceStamped& t)  {return covarianceRowMajorToNested(t.pose.covariance);}

/** \brief Transform the covariance matrix of a PoseWithCovariance message to a new frame.
 * \param cov_in The covariance matrix to transform.
 * \param transform The transform to apply, as a tf2::Transform structure.
 * \return The transformed covariance matrix.
 */
inline
geometry_msgs::msg::PoseWithCovariance::_covariance_type transformCovariance(
  const geometry_msgs::msg::PoseWithCovariance::_covariance_type & cov_in,
  const tf2::Transform & transform)
{
    /**
     * To transform a covariance matrix:
     *
     * \verbatim[R 0] COVARIANCE [R' 0 ]
      [0 R]            [0  R']\endverbatim
     *
     * Where:
     *         R is the rotation matrix (3x3).
     *         R' is the transpose of the rotation matrix.
     *         COVARIANCE is the 6x6 covariance matrix to be transformed.
     *
     * Reference:
     *         A. L. Garcia, “Linear Transformations of Random Vectors,” in Probability,
     *         Statistics, and Random Processes For Electrical Engineering, 3rd ed.,
     *         Pearson Prentice Hall, 2008, pp. 320–322.
     */

    // get rotation matrix (and transpose)
    const tf2::Matrix3x3 R = transform.getBasis();
    const tf2::Matrix3x3 R_transpose = R.transpose();

    // convert covariance matrix into four 3x3 blocks
    const tf2::Matrix3x3 cov_11(cov_in[0], cov_in[1], cov_in[2],
                                cov_in[6], cov_in[7], cov_in[8],
                                cov_in[12], cov_in[13], cov_in[14]);
    const tf2::Matrix3x3 cov_12(cov_in[3], cov_in[4], cov_in[5],
                                cov_in[9], cov_in[10], cov_in[11],
                                cov_in[15], cov_in[16], cov_in[17]);
    const tf2::Matrix3x3 cov_21(cov_in[18], cov_in[19], cov_in[20],
                                cov_in[24], cov_in[25], cov_in[26],
                                cov_in[30], cov_in[31], cov_in[32]);
    const tf2::Matrix3x3 cov_22(cov_in[21], cov_in[22], cov_in[23],
                                cov_in[27], cov_in[28], cov_in[29],
                                cov_in[33], cov_in[34], cov_in[35]);

    // perform blockwise matrix multiplication
    const tf2::Matrix3x3 result_11 = R * cov_11 * R_transpose;
    const tf2::Matrix3x3 result_12 = R * cov_12 * R_transpose;
    const tf2::Matrix3x3 result_21 = R * cov_21 * R_transpose;
    const tf2::Matrix3x3 result_22 = R * cov_22 * R_transpose;

    // form the output
    geometry_msgs::msg::PoseWithCovariance::_covariance_type cov_out;
    cov_out[0] = result_11[0][0];
    cov_out[1] = result_11[0][1];
    cov_out[2] = result_11[0][2];
    cov_out[6] = result_11[1][0];
    cov_out[7] = result_11[1][1];
    cov_out[8] = result_11[1][2];
    cov_out[12] = result_11[2][0];
    cov_out[13] = result_11[2][1];
    cov_out[14] = result_11[2][2];

    cov_out[3] = result_12[0][0];
    cov_out[4] = result_12[0][1];
    cov_out[5] = result_12[0][2];
    cov_out[9] = result_12[1][0];
    cov_out[10] = result_12[1][1];
    cov_out[11] = result_12[1][2];
    cov_out[15] = result_12[2][0];
    cov_out[16] = result_12[2][1];
    cov_out[17] = result_12[2][2];

    cov_out[18] = result_21[0][0];
    cov_out[19] = result_21[0][1];
    cov_out[20] = result_21[0][2];
    cov_out[24] = result_21[1][0];
    cov_out[25] = result_21[1][1];
    cov_out[26] = result_21[1][2];
    cov_out[30] = result_21[2][0];
    cov_out[31] = result_21[2][1];
    cov_out[32] = result_21[2][2];

    cov_out[21] = result_22[0][0];
    cov_out[22] = result_22[0][1];
    cov_out[23] = result_22[0][2];
    cov_out[27] = result_22[1][0];
    cov_out[28] = result_22[1][1];
    cov_out[29] = result_22[1][2];
    cov_out[33] = result_22[2][0];
    cov_out[34] = result_22[2][1];
    cov_out[35] = result_22[2][2];

    return cov_out;
}

// Forward declaration
void fromMsg(const geometry_msgs::msg::Transform& in, tf2::Transform& out);

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Pose type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The pose to transform, as a timestamped Pose3 message with covariance.
 * \param t_out The transformed pose, as a timestamped Pose3 message with covariance.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
  void doTransform(const geometry_msgs::msg::PoseWithCovarianceStamped& t_in, geometry_msgs::msg::PoseWithCovarianceStamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
  {
    KDL::Vector v(t_in.pose.pose.position.x, t_in.pose.pose.position.y, t_in.pose.pose.position.z);
    KDL::Rotation r = KDL::Rotation::Quaternion(t_in.pose.pose.orientation.x, t_in.pose.pose.orientation.y, t_in.pose.pose.orientation.z, t_in.pose.pose.orientation.w);

    KDL::Frame v_out = gmTransformToKDL(transform) * KDL::Frame(r, v);
    t_out.pose.pose.position.x = v_out.p[0];
    t_out.pose.pose.position.y = v_out.p[1];
    t_out.pose.pose.position.z = v_out.p[2];
    v_out.M.GetQuaternion(t_out.pose.pose.orientation.x, t_out.pose.pose.orientation.y, t_out.pose.pose.orientation.z, t_out.pose.pose.orientation.w);
    t_out.header.stamp = transform.header.stamp;
    t_out.header.frame_id = transform.header.frame_id;

    tf2::Transform tf_transform;
    fromMsg(transform.transform, tf_transform);
    t_out.pose.covariance = transformCovariance(t_in.pose.covariance, tf_transform);
  }

/** \brief Trivial "conversion" function for Pose message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A PoseWithCovarianceStamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::PoseWithCovarianceStamped toMsg(const geometry_msgs::msg::PoseWithCovarianceStamped& in)
{
  return in;
}

/** \brief Trivial "conversion" function for Pose message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A PoseWithCovarianceStamped message.
 * \param out The input argument.
 */
inline
void fromMsg(const geometry_msgs::msg::PoseWithCovarianceStamped& msg, geometry_msgs::msg::PoseWithCovarianceStamped& out)
{
  out = msg;
}

/** \brief Convert a tf2 TransformWithCovarianceStamped type to its equivalent geometry_msgs representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A instance of the tf2::Transform specialization of the tf2::WithCovarianceStamped template.
 * \return The TransformWithCovarianceStamped converted to a geometry_msgs PoseStamped message type.
 */
template<>
inline
geometry_msgs::msg::PoseWithCovarianceStamped toMsg(const tf2::WithCovarianceStamped<tf2::Transform>& in)
{
  geometry_msgs::msg::PoseWithCovarianceStamped out;
  out.header.stamp = tf2_ros::toMsg(in.stamp_);
  out.header.frame_id = in.frame_id_;
  out.pose.covariance = covarianceNestedToRowMajor(in.cov_mat_);
  out.pose.pose.orientation.x = in.getRotation().getX();
  out.pose.pose.orientation.y = in.getRotation().getY();
  out.pose.pose.orientation.z = in.getRotation().getZ();
  out.pose.pose.orientation.w = in.getRotation().getW();
  out.pose.pose.position.x = in.getOrigin().getX();
  out.pose.pose.position.y = in.getOrigin().getY();
  out.pose.pose.position.z = in.getOrigin().getZ();
  return out;
}

/** \brief Convert a PoseWithCovarianceStamped message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A PoseWithCovarianceStamped message type.
 * \param out The PoseWithCovarianceStamped converted to the equivalent tf2 type.
 */
template<>
inline
void fromMsg(const geometry_msgs::msg::PoseWithCovarianceStamped& in, tf2::WithCovarianceStamped<tf2::Transform>& out)
{
  out.stamp_ = tf2_ros::fromMsg(in.header.stamp);
  out.frame_id_ = in.header.frame_id;
  out.cov_mat_ = covarianceRowMajorToNested(in.pose.covariance);
  tf2::Transform tmp;
  fromMsg(in.pose.pose, tmp);
  out.setData(tmp);
}

/****************/
/** Quaternion **/
/****************/

/** \brief Convert a tf2 Quaternion type to its equivalent geometry_msgs representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A tf2 Quaternion object.
 * \return The Quaternion converted to a geometry_msgs message type.
 */
inline
geometry_msgs::msg::Quaternion toMsg(const tf2::Quaternion& in)
{
  geometry_msgs::msg::Quaternion out;
  out.w = in.getW();
  out.x = in.getX();
  out.y = in.getY();
  out.z = in.getZ();
  return out;
}

/** \brief Convert a Quaternion message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A Quaternion message type.
 * \param out The Quaternion converted to a tf2 type.
 */
inline
void fromMsg(const geometry_msgs::msg::Quaternion& in, tf2::Quaternion& out)
{
  // w at the end in the constructor
  out = tf2::Quaternion(in.x, in.y, in.z, in.w);
}


/***********************/
/** QuaternionStamped **/
/***********************/

/** \brief Extract a timestamp from the header of a Quaternion message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t QuaternionStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
tf2::TimePoint getTimestamp(const geometry_msgs::msg::QuaternionStamped& t)  {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Quaternion message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t QuaternionStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
std::string getFrameId(const geometry_msgs::msg::QuaternionStamped& t)  {return t.header.frame_id;}

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Quaternion type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The quaternion to transform, as a timestamped Quaternion3 message.
 * \param t_out The transformed quaternion, as a timestamped Quaternion3 message.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
void doTransform(const geometry_msgs::msg::QuaternionStamped& t_in, geometry_msgs::msg::QuaternionStamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
{
  tf2::Quaternion q_out = tf2::Quaternion(transform.transform.rotation.x, transform.transform.rotation.y,
                                          transform.transform.rotation.z, transform.transform.rotation.w)*
                          tf2::Quaternion(t_in.quaternion.x, t_in.quaternion.y, t_in.quaternion.z, t_in.quaternion.w);
  t_out.quaternion = toMsg(q_out);
  t_out.header.stamp = transform.header.stamp;
  t_out.header.frame_id = transform.header.frame_id;
}

/** \brief Trivial "conversion" function for Quaternion message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A QuaternionStamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::QuaternionStamped toMsg(const geometry_msgs::msg::QuaternionStamped& in)
{
  return in;
}

/** \brief Trivial "conversion" function for Quaternion message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A QuaternionStamped message.
 * \param out The input argument.
 */
inline
void fromMsg(const geometry_msgs::msg::QuaternionStamped& msg, geometry_msgs::msg::QuaternionStamped& out)
{
  out = msg;
}

/** \brief Convert as stamped tf2 Quaternion type to its equivalent geometry_msgs representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A instance of the tf2::Quaternion specialization of the tf2::Stamped template.
 * \return The QuaternionStamped converted to a geometry_msgs QuaternionStamped message type.
 */
inline
geometry_msgs::msg::QuaternionStamped toMsg(const tf2::Stamped<tf2::Quaternion>& in)
{
  geometry_msgs::msg::QuaternionStamped out;
  out.header.stamp = tf2_ros::toMsg(in.stamp_);
  out.header.frame_id = in.frame_id_;
  out.quaternion.w = in.getW();
  out.quaternion.x = in.getX();
  out.quaternion.y = in.getY();
  out.quaternion.z = in.getZ();
  return out;
}

/** \brief Convert a QuaternionStamped message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A QuaternionStamped message type.
 * \param out The QuaternionStamped converted to the equivalent tf2 type.
 */
inline
void fromMsg(const geometry_msgs::msg::QuaternionStamped& in, tf2::Stamped<tf2::Quaternion>& out)
{
  out.stamp_ = tf2_ros::fromMsg(in.header.stamp);
  out.frame_id_ = in.header.frame_id;
  tf2::Quaternion tmp;
  fromMsg(in.quaternion, tmp);
  out.setData(tmp);
}


/***************/
/** Transform **/
/***************/

/** \brief Convert a tf2 Transform type to its equivalent geometry_msgs representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A tf2 Transform object.
 * \return The Transform converted to a geometry_msgs message type.
 */
inline
geometry_msgs::msg::Transform toMsg(const tf2::Transform& in)
{
  geometry_msgs::msg::Transform out;
  out.translation.x = in.getOrigin().getX();
  out.translation.y = in.getOrigin().getY();
  out.translation.z = in.getOrigin().getZ();
  out.rotation = toMsg(in.getRotation());
  return out;
}

/** \brief Convert a Transform message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A Transform message type.
 * \param out The Transform converted to a tf2 type.
 */
inline
void fromMsg(const geometry_msgs::msg::Transform& in, tf2::Transform& out)
{
  out.setOrigin(tf2::Vector3(in.translation.x, in.translation.y, in.translation.z));
  // w at the end in the constructor
  out.setRotation(tf2::Quaternion(in.rotation.x, in.rotation.y, in.rotation.z, in.rotation.w));
}


/**********************/
/** TransformStamped **/
/**********************/

/** \brief Extract a timestamp from the header of a Transform message.
 * This function is a specialization of the getTimestamp template defined in tf2/convert.h.
 * \param t TransformStamped message to extract the timestamp from.
 * \return The timestamp of the message.
 */
template <>
inline
tf2::TimePoint getTimestamp(const geometry_msgs::msg::TransformStamped& t)  {return tf2_ros::fromMsg(t.header.stamp);}

/** \brief Extract a frame ID from the header of a Transform message.
 * This function is a specialization of the getFrameId template defined in tf2/convert.h.
 * \param t TransformStamped message to extract the frame ID from.
 * \return A string containing the frame ID of the message.
 */
template <>
inline
std::string getFrameId(const geometry_msgs::msg::TransformStamped& t)  {return t.header.frame_id;}

/** \brief Apply a geometry_msgs TransformStamped to an geometry_msgs Transform type.
 * This function is a specialization of the doTransform template defined in tf2/convert.h.
 * \param t_in The frame to transform, as a timestamped Transform3 message.
 * \param t_out The frame transform, as a timestamped Transform3 message.
 * \param transform The timestamped transform to apply, as a TransformStamped message.
 */
template <>
inline
void doTransform(const geometry_msgs::msg::TransformStamped& t_in, geometry_msgs::msg::TransformStamped& t_out, const geometry_msgs::msg::TransformStamped& transform)
  {
    KDL::Vector v(t_in.transform.translation.x, t_in.transform.translation.y,
                  t_in.transform.translation.z);
    KDL::Rotation r = KDL::Rotation::Quaternion(t_in.transform.rotation.x,
                                                t_in.transform.rotation.y, t_in.transform.rotation.z, t_in.transform.rotation.w);

    KDL::Frame v_out = gmTransformToKDL(transform) * KDL::Frame(r, v);
    t_out.transform.translation.x = v_out.p[0];
    t_out.transform.translation.y = v_out.p[1];
    t_out.transform.translation.z = v_out.p[2];
    v_out.M.GetQuaternion(t_out.transform.rotation.x, t_out.transform.rotation.y,
                          t_out.transform.rotation.z, t_out.transform.rotation.w);
    t_out.header.stamp = transform.header.stamp;
    t_out.header.frame_id = transform.header.frame_id;
  }

/** \brief Trivial "conversion" function for Transform message type.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in A TransformStamped message.
 * \return The input argument.
 */
inline
geometry_msgs::msg::TransformStamped toMsg(const geometry_msgs::msg::TransformStamped& in)
{
  return in;
}

/** \brief Convert a TransformStamped message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A TransformStamped message type.
 * \param out The TransformStamped converted to the equivalent tf2 type.
 */
inline
void fromMsg(const geometry_msgs::msg::TransformStamped& msg, geometry_msgs::msg::TransformStamped& out)
{
  out = msg;
}

/** \brief Convert a TransformStamped message to its equivalent tf2 representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param msg A TransformStamped message type.
 * \param out The TransformStamped converted to the equivalent tf2 type.
 */
inline
void fromMsg(const geometry_msgs::msg::TransformStamped& in, tf2::Stamped <tf2::Transform>& out)
{
  out.stamp_ = tf2_ros::fromMsg(in.header.stamp);
  out.frame_id_ = in.header.frame_id;
  tf2::Transform tmp;
  fromMsg(in.transform, tmp);
  out.setData(tmp);
}

/** \brief Convert as stamped tf2 Transform type to its equivalent geometry_msgs representation.
 * This function is a specialization of the toMsg template defined in tf2/convert.h.
 * \param in An instance of the tf2::Transform specialization of the tf2::Stamped template.
 * \return The TransformStamped converted to a geometry_msgs TransformStamped message type.
 */
inline
geometry_msgs::msg::TransformStamped toMsg(const tf2::Stamped<tf2::Transform>& in)
{
  geometry_msgs::msg::TransformStamped out;
  out.header.stamp = tf2_ros::toMsg(in.stamp_);
  out.header.frame_id = in.frame_id_;
  out.transform.translation.x = in.getOrigin().getX();
  out.transform.translation.y = in.getOrigin().getY();
  out.transform.translation.z = in.getOrigin().getZ();
  out.transform.rotation = toMsg(in.getRotation());
  return out;
}

/**********/
/** Pose **/
/**********/

/** \brief Convert a tf2 Transform type to an equivalent geometry_msgs Pose message.
 * \param in A tf2 Transform object.
 * \param out The Transform converted to a geometry_msgs Pose message type.
 */
inline
/** This section is about converting */
void toMsg(const tf2::Transform& in, geometry_msgs::msg::Pose& out )
{
  out.position.x = in.getOrigin().getX();
  out.position.y = in.getOrigin().getY();
  out.position.z = in.getOrigin().getZ();
  out.orientation = toMsg(in.getRotation());
}

/** \brief Convert a geometry_msgs Pose message to an equivalent tf2 Transform type.
 * \param in A Pose message.
 * \param out The Pose converted to a tf2 Transform type.
 */
inline
void fromMsg(const geometry_msgs::msg::Pose& in, tf2::Transform& out)
{
  out.setOrigin(tf2::Vector3(in.position.x, in.position.y, in.position.z));
  // w at the end in the constructor
  out.setRotation(tf2::Quaternion(in.orientation.x, in.orientation.y, in.orientation.z, in.orientation.w));
}

} // namespace

#endif // TF2_GEOMETRY_MSGS_H
