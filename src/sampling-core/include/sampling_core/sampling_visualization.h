#pragma once
#include <Eigen/Core>
#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

namespace sampling {
namespace visualization {

// this function gets the color for each pixel given the normalized value of the
// pixel
void getHeatMapColor(float norm, float &r, float &g, float &b);

// This function is used to generate the rviz visualization of the robot
// positions, corresponding voronoi edges, and heat map
void construct_visualization_map(const Eigen::MatrixXd &Fss,
                                 const Eigen::VectorXd &pred_h,
                                 const Eigen::VectorXd &pred_Var,
                                 visualization_msgs::Marker &seed_point,
                                 visualization_msgs::Marker &heat_map_pred,
                                 visualization_msgs::Marker &heat_map_Var,
                                 visualization_msgs::Marker &heat_map_truth);
}
} // namespace sampling