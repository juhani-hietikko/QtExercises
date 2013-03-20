#ifndef IPEDESTRIANLIGHT_H
#define IPEDESTRIANLIGHT_H

#include "lightstatus.h"

/*
 * An API for controlling a pedestrian (two-aspect) traffic light hardware unit.
 */
class IPedestrianLight
{
public:
    LightStatus getRedLightStatus();
    void setRedLightStatus(LightStatus status);

    LightStatus getGreenLightStatus();
    void setGreenLightStatus(LightStatus status);
};

#endif // IPEDESTRIANLIGHT_H
