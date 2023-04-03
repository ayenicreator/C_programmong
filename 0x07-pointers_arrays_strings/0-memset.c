#include "main.h"
/**
 * *_memset- memory set function
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes changed
 *
 * Return: chnaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i} = b;
		n--;
	}
	return (s);
}
