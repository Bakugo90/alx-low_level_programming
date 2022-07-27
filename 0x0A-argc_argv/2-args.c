#include <stdio.h>
/**
 * main - prints all the given arguments
 * @argc: the number of arguments
 * @argv: the array containing arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
