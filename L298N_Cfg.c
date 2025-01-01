#ifdef __cplusplus
extern "C"{
#endif /*__cplusplus*/
#include "L298N.h"
#include <Arduino.h>
L298N_PinType_t L298N_ChannelCfg[]=
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

