#include "main.h"
/**
 * print_line - prints a line
 * @n: lengn of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
