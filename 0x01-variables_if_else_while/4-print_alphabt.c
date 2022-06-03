#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if (m == 'q' || m == 'e')
			m++;
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
