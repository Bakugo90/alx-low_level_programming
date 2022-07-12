#include "main.h"
/**
 * _strcpy - a functions that return a character pointer
 * @dest: a character pointer variable
 * @src: a character pointer variable
 * Return: a character pointer
 */
char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
