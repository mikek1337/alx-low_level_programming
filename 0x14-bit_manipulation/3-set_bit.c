#include "main.h"
/**
 * set_bit - sets the value bit to one
 * @n: the bit to be converted
 * @index: index of the bit
 * Return: 1 if it is success -1 if it is not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned int m;

    if (index > 63)
        return (-1);

    m = 1 << index;

    *n = (*n | m);
    
    return (1);
}