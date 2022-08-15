#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: print single digit number
 * return: Always return 0 (on success)
 */

int main(void)
{
    int number;
    number = '0';

        while (number <= '9')
        {
            putchar(number);
            number++;
        }
    putchar('\n');
    return (0);
}
