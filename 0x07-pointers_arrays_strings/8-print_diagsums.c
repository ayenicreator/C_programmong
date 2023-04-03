#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum001, sum002, y;

	sum001 = 0;
	sum002 = 0;

	for (y = 0; y < size; y++)
	{
		sum001 = sum001 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum002 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum001, sum002);
}
