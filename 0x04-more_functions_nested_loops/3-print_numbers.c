#include "main.h"

/**
 * print_numbers - rints the numbers, from 0 to 9, followed by a new line.
 * Returns: 0
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;

	}
	_putchar('\n');
}
