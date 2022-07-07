#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by new line
 *
 * @separator: string to print between the strings
 * @n: number of strings passed to the function
 *
 * Description:
 * If separator is NULL, don't print it.
 * If one of the strings is NULL, print (nil) instead
 * Print a new line at the end of function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *clone;

	if (n != 0)
	{
		va_start(vl, n);

		for (i = 0; i < n; i++)
		{
			clone = va_arg(vl, char*);
			if (clone)
				printf("%s", clone);
			else
				printf("%p", clone);

			if (separator && i < n - 1)
				printf("%s", separator);
		}

		va_end(vl);
	}
	printf("\n");
}
