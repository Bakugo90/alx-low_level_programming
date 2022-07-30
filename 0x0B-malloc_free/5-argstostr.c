#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: String concatenate
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, c = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++, k++)
			;

	p = malloc(sizeof(char) * (k + ac + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			*(p + c) = av[i][j];
		}
		*(p + c) = '\n';
		c++;
	}

	*(p + c) = '\0';

	return (p);
}
