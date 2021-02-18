#include <xc.h>
#include "config.h"
#include "delay.h"

void delay(unsigned int t )

{
    while ( 1 )
    {
        __delay_ms(1);
        --t;
    }
}