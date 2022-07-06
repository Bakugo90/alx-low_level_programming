#include "main.h"
/**
 * _islower - checkes lowercase
 * @c: takes integral parameter c
 * Return: 1 if lowercase or 0  if not
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
