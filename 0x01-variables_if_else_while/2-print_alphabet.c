#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
