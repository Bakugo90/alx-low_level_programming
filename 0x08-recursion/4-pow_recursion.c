#include "main.h"
/**
 * _pow_recursion - computes the x the power of y
 * @x: the base of the power calculation
 * @y: the exponent of the power calculation
 * Return: the result of the power calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
