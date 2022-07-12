#include "main.h"
/**
 * print_array - prints values of array in some defined format
 * @a: an integer pointer
 * @n: an integer variable
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
