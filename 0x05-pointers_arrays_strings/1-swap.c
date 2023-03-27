#include "main.h"
/**
 * swap_int - function to swap integers 
 * @a- a is an integer to swap
 * @b- b is also an integer to swap
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
