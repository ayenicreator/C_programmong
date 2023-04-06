#include "main.h"
/**
 * _strlen_recursion- function that returns the length of a string.
 * @s: length of a string
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s != '\0')
	{
		strlen++;
		strlen = (strlen + _strlen_recursion(s + 1));
	}

	return (strlen);
}
