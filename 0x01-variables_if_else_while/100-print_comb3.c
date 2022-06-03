#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * The two digits must be different
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the 'putchar' function to print to the console
 * You can only use 'putchar' five times maximum in your code.
 * You are not allowed to use any variable of type 'char'
 *
 * Return: 0
 */
int main(void)
{
	int m = 0;
	int n, p;

	while (m < 100)
	{
		n = m % 10; /* the singles digit */
		p = m / 10; /* the doubles digit */

		if (p < n)
		{
			putchar(p + '0');
			putchar(n + '0');

			if (m < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		m++;
	}
	putchar('\n');

	return (0);
}
