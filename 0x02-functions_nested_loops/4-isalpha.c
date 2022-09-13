#include "main.h"

/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alpabet to check for
 *
 * Return: 1 if alphabet is lower or uppercase, otherwise 0*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
