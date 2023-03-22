#include "main.h"
/**
*positive_or_negative - check for positive negative and zero integers.i
*@n: number to be checked
*Return: nothing on Success
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
