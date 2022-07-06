#include "main.h"
/**
 * print_sign - prints signs of a number
 * @n: takes integer paramer n
 * Return: 1 if the number is positive
 * 0 if the number is zero
 * 1 if the number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

