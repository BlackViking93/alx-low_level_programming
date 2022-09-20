#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		putchar(s[k]);
	}

	putchar('\n');
}
