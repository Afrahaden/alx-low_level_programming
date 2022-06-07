#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int to be checked
 * Description: print +, 0, or - depending on the sign
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
