#include "main.h"
/**
 * _isdigit - checkes for digit numbers
 * @c: takes a c parameter
 * Return: 1 if c is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
