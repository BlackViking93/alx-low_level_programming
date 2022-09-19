#include <stdio.h>
#include "main.h"

/*
 * reset_to_98 - updates value of a variable
 * Return: 0
 */

void reset_to_98(int *n)
{
	int *p;

	p = &n;

	*p = 98;

	return;
}
