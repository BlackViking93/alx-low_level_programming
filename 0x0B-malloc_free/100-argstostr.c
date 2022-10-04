#include "main.h"
#include <stdlib.h>

/**
 * argstostr - check the code for ALX School students.
 * @ac: integer
 * @av: character
 * Return: Null or string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, buffL;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = j = l  = buffL = 0;

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	p = (char *) malloc(l * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffL++)
			p[buffL] = av[i][j];
		p[buffL] = '\n';
		buffL++;
	}
	p[buffL] = '\0';
	return (p);
}
