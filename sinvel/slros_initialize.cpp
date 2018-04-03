#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "sinvel";

// For Block sinvel/Publish for Leader Vel
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_sinvel_geometry_msgs_Twist> Pub_sinvel_27;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

