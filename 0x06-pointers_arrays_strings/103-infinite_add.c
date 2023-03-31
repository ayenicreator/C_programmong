#include "main.h"

/**
 *rev_string - reverse array
 *@n: interger parameters
 *Return: 0
 */
void rev_dstring(char *n)
{
	int i = 0;
	int j = 0;
	char tempo;

	while (*(n+i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tempo = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tempo;
	}
}

/**
 * infinite_add - add 2 numbers 
 * @n1: text representation of 1st number
 * @n2: text representation of 2nd number
 * @r: pointer to buffer
 * @size_r: buffer size 
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ayeni_must_learn = 0, i = 0, j = 0, digits =0;
	int orhmo_val = 0, orhmo_val2 = 0, tempt =0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		i--;
		j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || ayeni_must_learn == 1)
	{
		if (i < 0)
			orhmo_val = 0;
		else
			orhmo_val = *(n1 + i) - '0';
		if (j < 0)
			orhmo_val2 = 0;
		else
			orhmo_val2 = *(n2 + j) - '0';
		tempt = orhmo_val + orhmo_val2 + ayeni_must_learn;
		if (tempt >= 10)
			ayeni_must_learn = 1;
		else
			ayeni_must_learn = 0;
		if (digits >= (size_r -1))
			return (0);
		*(r + digits) = (tempt % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if ( digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
