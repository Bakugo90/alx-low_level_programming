#include <stdio.h>

/**
* main - Entry point
*
* Description: print alphabet in lower case
* Return: Always 0 (Succes)*
*/

int main(void)
{
char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
		putchar('\n');

	return (0);
}
