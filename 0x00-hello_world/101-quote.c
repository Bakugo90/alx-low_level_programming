#include <stdio.h>

/**
 * main-Entry level
 *
 * Description: print at stderr with a new line
 * Return: always return 1
 */
int main(void)
{
	void *ptr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(ptr, 62, 1, stderr);
		return (1);
}
