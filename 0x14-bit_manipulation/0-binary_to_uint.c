#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: a string of binary numbers
* Return: returns an unsigned int after conversion
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n <<= 1;
			n += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (n);
}
