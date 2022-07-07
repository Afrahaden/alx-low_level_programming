#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all its parameters
 * @n: the number of integers that are passed
 *
 * Description: takes a variable number of arguments and sums them
 * Return: 0 if n is 0, or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
