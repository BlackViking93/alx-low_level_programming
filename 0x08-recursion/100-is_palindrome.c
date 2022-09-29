#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string parameter
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pali - palindrome
 * @s: pointer to string
 * @i: position
 * Return: boolean
 */

int pali(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}

	if (*s == *(s + i))
	{
		return (pali(s + 1, i - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali(s, len - 1));
}
