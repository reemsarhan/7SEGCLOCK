#include "../HAL/7_seg/7_seg_int.h"
#include "../MCAL/DIO/DIO.h"
#include "../LIB/STD_TYPES.h"
#include <util/delay.h>

int main(void)
{
    u8 i = 0, j = 0, k = 0;

    HSSD_voidInit(2);
    HSSD_voidInit(0);
    HSSD_voidInit(1);
    HSSD_voidInit(3);

    while (1)
    {
        while (i < 6)
        {
            HSSD_voidCountUp(3, i); // Display value i on port D
            i++;
            HSSD_VoidDisplayNumber(2, i); // Display value i on port C
        }
        if (i == 6)
        {
            HSSD_VoidDisplayNumber(2, 0); // Display 0 on port C
            HSSD_VoidDisplayNumber(3, 0); // Display 0 on port D
            i = 0;
        }
        j++;
        HSSD_VoidDisplayNumber(1, j); // Display value j on port B

        if (j > 9)
        {
            j = 0;
            HSSD_VoidDisplayNumber(1, 0); // Display 0 on port B
            k++;
            HSSD_VoidDisplayNumber(0, k); // Display value k on port A
            if (k > 9)
            {
                k = 0;
                HSSD_VoidDisplayNumber(0, 0); // Display 0 on port A
            }
        }

        _delay_ms(1000); // Wait for 1 second
    }

    return 0;
}


