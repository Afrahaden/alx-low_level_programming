#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x / 10 < 1)
	{
		putchar(x % 10 + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
