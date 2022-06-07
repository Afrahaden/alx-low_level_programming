#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer input
 * Return: n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	n *= -1;
	return (n);
}
