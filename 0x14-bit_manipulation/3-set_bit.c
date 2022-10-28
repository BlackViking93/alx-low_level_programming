#include "main.h"

/**
* set_bit - a function that sets the value of a bit to 1 at a given index
* @n: the number to be operated on
* @index: the index
* Return: returns 1 (Success), -1 (error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask) | (1 << index);

	 return (1);
}
