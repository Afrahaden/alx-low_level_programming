#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase using only '_putchar' function
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
