#include "chop.h"
#include <cstddef>
#include <cstdio>

int chop(int value, int array[], size_t len)
{
    if (0 == len)
    {
        return -1;
    }
    
    if (1 == len)
    {
        return 0;
    }
    
    int low = 0;
    int high = len-1;
    int midway;
   
    do
    {
        if ( low > high )
            break;

        midway = (low + high)/2;
        if ( array[midway] == value)
        {
            return midway;
        }
        else if ( array[midway] < value)
        {
            low = midway+1;
        }
        else 
        {
            high = midway -1;
        }
    } while(true);

    return -1;
}
