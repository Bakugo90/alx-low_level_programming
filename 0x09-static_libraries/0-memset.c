#include "main.h"
/**
 *_memset - fills the memory with constant byte
 * @s: destiny character pointer
 * @b: the character pointer that contains the bytes to be filled
 * @n: the number of bytes to be filled
 * Return: a character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
