#include <stdio.h>

/**
 * main-Entry level
 *
 * Description: print a size of variable data type
 * Return: always print 0 (succes)
 */
int main(void)
{
	char string;
	int number;
	long along;
	long long alongalong;
	float decimal;

	printf("Size of a char: %lu byte(s)\n", sizeof(string));
	printf("Size of an int: %lu byte(s)\n", sizeof(number));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongalong));
	printf("Size of a float: %lu byte(s)\n", sizeof(decimal));

		return (0);
}
