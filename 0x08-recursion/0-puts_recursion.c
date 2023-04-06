#include "main.h"
/**
 *void _puts_recursion- a function to print a strings
 *@s- string length
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
