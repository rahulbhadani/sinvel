#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block sinvel/Publish for Leader Vel
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_sinvel_geometry_msgs_Twist> Pub_sinvel_27;

void slros_node_init(int argc, char** argv);

#endif
