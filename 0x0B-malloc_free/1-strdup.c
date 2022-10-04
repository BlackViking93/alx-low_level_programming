#include "main.h"
#include <stdlib.h>

/**
 * _strdup - display a copy of a string in a pointer
 * @str: string
 * Return: Null or string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';

	return (p);
}
