#include "main.h"
/**
 * factorial - computes a factorial of a number
 * @n: a number for which a factorial is calculated
 * Return: a computed factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
