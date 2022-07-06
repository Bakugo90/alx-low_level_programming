#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: print _putchar to stdout
 * Return: always 0
 */
int main(void)
{
	int i;
	char c[8] = "_putchar";

		for (i = 0; i < 8; i++)
		{
			putchar(c[i]);
		}
			putchar('\n');
	return (0);
}
