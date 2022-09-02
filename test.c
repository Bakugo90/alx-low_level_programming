#include <stdio.h>
/**
 * main - prints all the given arguments
 * @argc: the number of arguments
 * @argv: the array containing arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
