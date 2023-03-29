#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int t;

	for (; b < n--; b++)
	{
		t = a[b];
		a[b] = a[n];
		a[n] = t;
	}
}
