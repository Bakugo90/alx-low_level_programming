#include "main.h"
/**
 * print_alphabet - prints lowercase letters
 * @void: void
 * Description: prints alphabet in lowercase
 * Return: all in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	_putchar('\n');
	}
}
