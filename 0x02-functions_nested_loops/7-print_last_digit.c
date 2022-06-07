#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @d: integer input
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
	int i;

	i = d % 10;

	if (i < 0)
		i *= -1;
	_putchar('0' + i);
	return (i);
}
