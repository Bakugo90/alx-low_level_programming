#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * @void: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char letter;

	while (counter <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
		counter++;
	}
}
