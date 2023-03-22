#include "main.h"
/**
 *positive_or_negative - check for positive negative and zero integers.i
 *Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
}
