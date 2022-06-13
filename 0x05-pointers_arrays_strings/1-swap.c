#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer variable of type int
 * @b: pointer variable of type int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
