#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - Prints strings, followed by a new line
 *@separator: The string to be printed between strings
 *@n: The number of strings passed to the function
 *@...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *aid;
	unsigned int dex;

	va_start(strings, n)


	for (dex = 0; dex < n; dex++)
	{
		aid = va_arg(strings, char*);

		if (aid == NULL)
			printf("(nil)");
		else
			printf("%s", aid);

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n")

	va_end(strings);
}
