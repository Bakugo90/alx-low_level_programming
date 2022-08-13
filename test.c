#include <stdio.h>
#include <stdlib.h>

/**
 * user- Learning c structure
 */

struct structure
{
    int a;
    struct structure *suivant;
}

struct structure *head = NULL;