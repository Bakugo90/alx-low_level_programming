#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked : Allocates memeory and check malloc
 * @b : size to be allocates
 * 
 * Return :  return pointers on success and 98 on fail 
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

    
	return (p);
}