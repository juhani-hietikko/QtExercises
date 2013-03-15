#ifndef IPEDESTRIANLIGHT_H
#define IPEDESTRIANLIGHT_H

#include "lightstatus.h"

class IPedestrianLight
{
public:
    LightStatus getRedLightStatus();
    void setRedLightStatus(LightStatus status);

    LightStatus getGreenLightStatus();
    void setGreenLightStatus(LightStatus status);
};

#endif // IPEDESTRIANLIGHT_H
