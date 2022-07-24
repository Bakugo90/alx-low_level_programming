#include "main.h"
/**
 * _strlen - a function that returns a length of a string
 * @s: a character pointer s
 * Return: length of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
		x = 0;
	else
		while (s[x] != '\0')
			x++;
	return (x);
}
