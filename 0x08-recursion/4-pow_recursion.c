#include "main.h"

/**
* _pow_recursion - a function that returns the value of x raised to the
* power of y
* @x: the base integer
* @y: the exponent
*Return: returns x raised to the power of y as an int
*/
int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
