#include <stdio.h>

/**
 * main -Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
