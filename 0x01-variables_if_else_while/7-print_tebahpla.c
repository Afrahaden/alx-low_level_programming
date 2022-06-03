#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');

	return (0);
}
