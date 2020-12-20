#ifndef _ROS_SERVICE_GetMotionPlan_h
#define _ROS_SERVICE_GetMotionPlan_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "moveit_msgs/MotionPlanRequest.h"
#include "moveit_msgs/MotionPlanResponse.h"

namespace moveit_msgs
{

static const char GETMOTIONPLAN[] = "moveit_msgs/GetMotionPlan";

  class GetMotionPlanRequest : public ros::Msg
  {
    public:
      typedef moveit_msgs::MotionPlanRequest _motion_plan_request_type;
      _motion_plan_request_type motion_plan_request;

    GetMotionPlanRequest():
      motion_plan_request()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->motion_plan_request.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->motion_plan_request.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GETMOTIONPLAN; };
    virtual const char * getMD5() override { return "1efc7edf730e4b9e4699487d0eafaec9"; };

  };

  class GetMotionPlanResponse : public ros::Msg
  {
    public:
      typedef moveit_msgs::MotionPlanResponse _motion_plan_response_type;
      _motion_plan_response_type motion_plan_response;

    GetMotionPlanResponse():
      motion_plan_response()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->motion_plan_response.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->motion_plan_response.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GETMOTIONPLAN; };
    virtual const char * getMD5() override { return "b87f68f66cd157fdfe416b1070b9ecb6"; };

  };

  class GetMotionPlan {
    public:
    typedef GetMotionPlanRequest Request;
    typedef GetMotionPlanResponse Response;
  };

}
#endif
