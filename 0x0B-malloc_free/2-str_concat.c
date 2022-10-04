#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: Null of s1
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, size, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	size = i + j + 1;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < size; z++)
		z < i ? (p[z] = s1[z]) : (p[z] = s2[z - i]);
	return (p);
}
