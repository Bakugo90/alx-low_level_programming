#include "main.h"
#include <stdio.h>

/**
*_memset-Fill the memory with a constant bytes
*@n:size of memory to print
*@b: constants destiny to fill the memory
*@s: address of memory
*
*Return: a pointers
*/

char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (i= 0; i<n; i++)
    {
        s=b;
        printf("%lu", s);
    }
    return (0);
}
