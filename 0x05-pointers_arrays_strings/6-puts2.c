#include "main.h"
/**
 * puts2 - prints every character with a new line
 * @str: a character pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
