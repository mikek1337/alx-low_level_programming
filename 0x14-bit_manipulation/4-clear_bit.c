#include "main.h"

/**
 * clear_bit - set the value of bit to 0
 * @n: the bit
 * @index: the index of the bit need change
 * Retrun: 1 on success -1 on faliure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned int m;
    if (index > 63)
        return (-1);
    m = 1 << index;

    if(*n & m)
        *n ^= m;
    return (1);

}