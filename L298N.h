/*
*     _______ .__   __.   _______  __  .__   __.  _______  _______ .______         .______    __  .__   __.   _______
*    |   ____||  \ |  |  /  _____||  | |  \ |  | |   ____||   ____||   _  \        |   _  \  |  | |  \ |  |  /  _____|
*    |  |__   |   \|  | |  |  __  |  | |   \|  | |  |__   |  |__   |  |_)  |       |  |_)  | |  | |   \|  | |  |  __  
*    |   __|  |  . `  | |  | |_ | |  | |  . `  | |   __|  |   __|  |      /        |   ___/  |  | |  . `  | |  | |_ |
*    |  |____ |  |\   | |  |__| | |  | |  |\   | |  |____ |  |____ |  |\  \----.   |  |      |  | |  |\   | |  |__| |
*    |_______||__| \__|  \______| |__| |__| \__| |_______||_______|| _| `._____|   | _|      |__| |__| \__|  \______|
*                                                                                                                    
*/

#ifndef __L298N__H_
#define __L298N__H_

#ifdef __cplusplus
extern "C"{
#endif /*__cplusplus*/
#include "stdint.h"
#define MOTOR_FORWARD 2U
#define MOTOR_REVERSE 1U
#define MOTOR_STOP    0U

#define L298N_MOTOR_CHANNEL_MAX 2U

typedef unsigned char Std_Return;

typedef void (*pinWirteFunc_t)(uint8_t,uint8_t);
typedef void (*pwmWirteFunc_t)(uint8_t,float);
typedef struct L298N_PinType{
    int pinNumA;
    int pinNumB;
    pinWirteFunc_t pinWirteFunc;
    int pwmNNum;
    pwmWirteFunc_t pwmWriteFunc;
}L298N_PinType_t;
extern L298N_PinType_t L298N_ChannelCfg[L298N_MOTOR_CHANNEL_MAX];
Std_Return L298N_MotorControl(int channel,unsigned char rotation );
Std_Return L298N_MotorSpeed(int channel,float speed);

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /*__L298N__H_*/