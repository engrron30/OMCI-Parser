#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum lan_link
{
    LAN_LINK_UP = 0,
    LAN_LINK_DOWN,
};

enum lan_mode_speed
{
    LAN_MODE_SPEED_AUTO = 0,            /*10/100/1000BASE-T automatic speed negotiation. */      
    LAN_MODE_SPEED_10 = 1,              /* 10 Mbit/s fixed speed selection. */      
    LAN_MODE_SPEED_100 = 2,             /* 100 Mbit/s fixed speed selection. */      
    LAN_MODE_SPEED_1G = 3,              /* 1 Gbit/s fixed speed selection. */      
    LAN_MODE_SPEED_10G = 4,             /* 10 Gbit/s fixed speed selection. */       
    LAN_MODE_SPEED_UNKNOWN = 5,         /* Uninitialized or unknown value (depends on the used context). */
    LAN_MODE_SPEED_2dot5G = 6,
};

enum lan_mode_duplex
{       
    LAN_PHY_MODE_DUPLEX_AUTO = 0,       /* Automatic duplex mode negotiation. */
    LAN_PHY_MODE_DUPLEX_FULL = 1,       /* Fixed full duplex mode selection. */        
    LAN_PHY_MODE_DUPLEX_HALF = 2,       /* Fixed half duplex mode selection. */      
    LAN_PHY_MODE_DUPLEX_UNKNOWN = 3,    /* Uninitialized or unknown value (depends on the used context). */
};

typedef struct lan_link_status
{
    enum lan_link link_up;              /*an link status */  
    enum lan_mode_duplex duplex_mode;   /*link duplex mode  */  
    enum lan_mode_speed link_speed;     /*link speed */
} lan_link_status_t;

int main()
{
    lan_link_status_t current_lan_link = {0,0,0};
    return 0;
}
