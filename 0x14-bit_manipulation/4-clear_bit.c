#include "main.h"

/**
* clear_bit - a function that clears the value of a bit at a given index
* @n: the number to be operated on
* @index: the index
* Return: returns 1 (Success), -1 (error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask);

	return (1);
}
