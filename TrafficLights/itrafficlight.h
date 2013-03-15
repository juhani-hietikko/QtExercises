#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "lightstatus.h"

class ITrafficLight
{
public:
    LightStatus getRedLightStatus();
    void setRedLightStatus(LightStatus status);

    LightStatus getYellowLightStatus();
    void setYellowLightStatus(LightStatus status);

    LightStatus getGreenLightStatus();
    void setGreenLightStatus(LightStatus status);
};

#endif // TRAFFICLIGHT_H
