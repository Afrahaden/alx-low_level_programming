#include <stdio.h>

/**
 * main -Entry point
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use the 'putchar' function to print
 * You can only use the 'putchar' function up to four times.
 * You are not allowed to use any variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(k + '0');
		if (k < 9)
		{
			putchar(44);
			putchar(32);
		}
		k++;
	}
	putchar('\n');

	return (0);
}
