#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in mem
 * @str: Literal String
 * Return: Return a pointer or return NULL if inneficient memory or str is NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
