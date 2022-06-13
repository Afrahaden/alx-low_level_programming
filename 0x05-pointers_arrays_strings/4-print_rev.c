#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by new line
 * @s: character pointer to string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
