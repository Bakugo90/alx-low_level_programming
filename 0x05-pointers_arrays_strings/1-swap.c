#include "main.h"
/**
 * swap_int - swaps integers using pointers
 * @a: integer pointer a
 * @b: integer pointer b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
