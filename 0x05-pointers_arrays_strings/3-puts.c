#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: a string pointer parameter
 * Return: nothing
 */
void _puts(char *str)
{
	char *s;
	int n;

	s = str;
	for (n = 0; s[n]; n++)
		_putchar(s[n]);
	_putchar('\n');
}
