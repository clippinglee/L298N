#ifndef __L298N__H_
#define __L298N__H_

#ifdef __cplusplus
extern "C"{
#endif /*__cplusplus*/
#include "stdint.h"
#define MOTOR_FORWARD 2U
#define MOTOR_REVERSE 1U
#define MOTOR_STOP    0U
typedef unsigned char Std_Return;

typedef void (*pinWirteFunc_t)(uint8_t,uint8_t);
typedef void (*pwmWirteFunc_t)(uint8_t,uint8_t);
typedef struct L298N_PinType{
    int pinNumA;
    int pinNumB;
    pinWirteFunc_t pinWirteFunc;
    int pwmNNum;
    pwmWirteFunc_t pwmWriteFunc;
}L298N_PinType_t;
extern L298N_PinType_t L298N_ChannelCfg[];
Std_Return L298N_MotorControl(int channel,unsigned char rotation );
Std_Return L298N_MotorSpeed(int channel,float speed);
#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /*__L298N__H_*/