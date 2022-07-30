#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - Function that splits a string into words
 * @str: String to be worked
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j = 0, k, m;
	char **a;

	if (str[0] >= 33 && str[0] <= 126)
		j++;
	for (i = 0; str[i]; i++)
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j++;
	if (str == NULL || j == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (j + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			for (m = i; str[m] != '\0' && str[m] != ' '; m++)
				;
			a[j] = malloc(sizeof(char) * (m - i + 1));
			if (a[j] == NULL)
				return (NULL);
			for (m = i, k = 0; str[m] != '\0' && str[m] != ' '; m++, k++)
				a[j][k] = str[m];
			a[j][k] = '\0';

			i = m - 1, j++;
		}
	}
	a[j] = NULL;

	return (a);
}
