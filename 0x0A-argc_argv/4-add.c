#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums up the posive numbers
 * @argc: the number of parameters
 * @argv: the array that contains the arguments
 * Return: 0 upon sucess and 1 upon error
 */
int main(int argc, char *argv[])
{
	int sum, i, numbers;

	sum = 0;
	for (numbers = 1; numbers < argc; numbers++)
	{
		for (i = 0; argv[numbers][i]; i++)
		{
			if (argv[numbers][i] < '0' || argv[numbers][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[numbers]);
	}
	printf("%d\n", sum);
	return (0);
}
