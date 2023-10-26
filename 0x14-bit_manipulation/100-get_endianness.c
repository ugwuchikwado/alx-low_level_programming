#include <stdio.h>
#include "main.h"

/*
 * get_endianness: ....
 *
 * Return: Nothing
 *
 */

int get_endianness(void) {
    unsigned int num = 1;
    
    if (*(char*)&num == 1) {
        
        return 1;
    } else {
        
        return 0;
    }
}
