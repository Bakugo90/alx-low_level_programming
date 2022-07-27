#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the muliplication of two numbers
 * @argc: the number of arguments
 * @argv: the available parameters array
 * Return: 0 if sucess and 1 if not
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
		return (0);
	}
}
