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
#endif /*__cplusplus*/
#include "L298N.h"
#include <Arduino.h>
L298N_PinType_t L298N_ChannelCfg[L298N_MOTOR_CHANNEL_MAX]=
{
    {
        .pinNumA = 16,
        .pinNumB = 17,
        .pinWirteFunc = digitalWrite,
    },
    {
        .pinNumA = 18,
        .pinNumB = 19,
        .pinWirteFunc = digitalWrite,
    }
};






#ifdef __cplusplus
}
#endif /*__cplusplus*/

