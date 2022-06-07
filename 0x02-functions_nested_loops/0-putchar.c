#include "main.h"

/**
 * main -Entry point
 *
 * Description: print '_putchar' followed by a new line
 * You are not allowed to use standard library functions.
 *
 * Return: 0
 */
int main(void)
{
	char display[] = "_putchar";
	int i = 0;

	while (display[i] != '\0')
	{
		_putchar(display[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
