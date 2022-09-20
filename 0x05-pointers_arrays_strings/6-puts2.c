#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j += 2)
	{
		putchar(str[j]);
	}

	putchar('\n');
}
