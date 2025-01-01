
#ifdef __cplusplus
extern "C"{
#endif
#include "L298N.h"

Std_Return L298N_MotorControl(int channel,unsigned char rotation )
{
    L298N_PinType_t* pinControl = &L298N_ChannelCfg[channel];
    if(rotation == MOTOR_FORWARD)
    {
        pinControl->pinWirteFunc(pinControl->pinNumA,1);
        pinControl->pinWirteFunc(pinControl->pinNumB,0);
    }
    else if(rotation == MOTOR_REVERSE)
    {
        pinControl->pinWirteFunc(pinControl->pinNumA,0);
        pinControl->pinWirteFunc(pinControl->pinNumB,1);
    }
    else
    {
        pinControl->pinWirteFunc(pinControl->pinNumA,0);
        pinControl->pinWirteFunc(pinControl->pinNumB,0);
    }
    return 0;
}


Std_Return L298N_MotorSpeed(int channel,float speed)
{
    L298N_PinType_t* pinControl = &L298N_ChannelCfg[channel];
    pinControl->pwmWriteFunc(pinControl->pwmNNum,speed);
}


#ifdef __cplusplus
}
#endif