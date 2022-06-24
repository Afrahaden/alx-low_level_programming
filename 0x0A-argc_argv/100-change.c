#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to
 *	make change
 * Description: if the number of arguments is 1, print Error,
 * return 1.
 * Use atoi to parse the parameters passed.
 * If the number passed as the argument is negative, print 0
 * followed by new line.
 * Use an unlimited number of coins of values 25, 10, 5, 2, 1 cent
 *
 * @argc: argument count
 * @argv: argument vector-an array of characters
 * Return: 1 if Error, 0 Success
 */

int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
