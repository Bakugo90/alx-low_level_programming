#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: a character pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, start;


	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	start = (i + 1) / 2;
	for (i = start; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
