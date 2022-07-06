#include "main.h"

/**
 * _isalpha - checkes both lower and upper case letters
 *
 * @c: integer parameter c
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
