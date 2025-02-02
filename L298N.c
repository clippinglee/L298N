/*
*     _______ .__   __.   _______  __  .__   __.  _______  _______ .______         .______    __  .__   __.   _______
*    |   ____||  \ |  |  /  _____||  | |  \ |  | |   ____||   ____||   _  \        |   _  \  |  | |  \ |  |  /  _____|
*    |  |__   |   \|  | |  |  __  |  | |   \|  | |  |__   |  |__   |  |_)  |       |  |_)  | |  | |   \|  | |  |  __  
*    |   __|  |  . `  | |  | |_ | |  | |  . `  | |   __|  |   __|  |      /        |   ___/  |  | |  . `  | |  | |_ |
*    |  |____ |  |\   | |  |__| | |  | |  |\   | |  |____ |  |____ |  |\  \----.   |  |      |  | |  |\   | |  |__| |
*    |_______||__| \__|  \______| |__| |__| \__| |_______||_______|| _| `._____|   | _|      |__| |__| \__|  \______|
*                                                                                                                    
*/

#ifdef __cplusplus
extern "C"{
#endif
#include "stddef.h"
#include "L298N.h"

Std_Return L298N_MotorControl(int channel,unsigned char rotation )
{
    if(channel >= L298N_MOTOR_CHANNEL_MAX)
    {
        return 1;
    }
    L298N_PinType_t* pinControl = &L298N_ChannelCfg[channel];
    if(pinControl->pinWirteFunc == NULL)
    {
        return 1;
    }
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
    if(channel >= L298N_MOTOR_CHANNEL_MAX)
    {
        return 1;
    }
    L298N_PinType_t* pinControl = &L298N_ChannelCfg[channel];
    if(pinControl->pwmWriteFunc == NULL)
    {
        return 1;
    }
    pinControl->pwmWriteFunc(pinControl->pwmNNum,speed);
    return 0;
}


#ifdef __cplusplus
}
#endif