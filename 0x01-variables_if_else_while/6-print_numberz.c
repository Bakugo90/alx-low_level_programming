#include <stdio.h>

/**
 * main-Entry point
 * @void: ...
 *
 * Return: digit number from 0 to 9.
 */

int main(void)
{
unsigned int i;
for ( i = '0'; i <= '9'; i++ )
{
putchar(i);
}
putchar('\n');
return (0);
}
