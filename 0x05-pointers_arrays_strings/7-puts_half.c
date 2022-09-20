#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	} else
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			putchar(str[j + 1]);
		}
	}
	putchar('\n');
}
