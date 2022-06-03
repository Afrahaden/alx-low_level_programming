#include <stdio.h>

/**
 * main -Entry point
 *
 * Description:
 * Program that prints all possible different combinations of three digits.
 * Numbers must be separated by commas followed by a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the 'putchar' function to print to the console.
 * You can only use 'putchar' six times maximum in your code.
 * You are not allowed to use any variable of type 'char'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int a, b, c;

	while (num < 1000)
	{
		a = num % 10; /* obtain the singles digit */
		b = (num % 100) / 10; /* obtain the tens digit */
		c = num / 100; /* the hundreds digit */

		if (c < b && b < a)
		{
			putchar(c + '0');
			putchar(b + '0');
			putchar(a + '0');

			if (num < 789)
			{
				putchar(44);
				putchar(32);
			}
		}
		num++;
	}
	putchar('\n');

	return (0);
}
