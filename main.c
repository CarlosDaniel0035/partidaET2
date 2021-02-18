#include "config.h"
#include <xc.h>
#include "delay.h"
#include "contatoresebotoes.h"


int botoes_init (void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
}

{
    int estado = 0;
    int t;
    while( 1 )
    {
        switch ( estado )
        {
            case 0:
                   
                    estado = 1;
                    break;
                    
            case 1: 
                   
                    break;
                    
            case 2:
                
                    break;
                    
            case 3:
                   
                    break;
                    
            case 4:
                        
                    break;
                    
            case 5:
                    
                    break;
                    
            case 6:
                    
                    break;
                    
            case 7:
                    
                    break;
                    
            case 8:
                    
                    break;
                    
                    
        }
    }    
}

