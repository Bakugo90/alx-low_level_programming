#include <stdio.h>

/**
 *main - Entry level
 *
 * Description: print alphabet in lower and uppercase
 * Return: (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{

		putchar(ch);
	}
		putchar('\n');

	return (0);
}
