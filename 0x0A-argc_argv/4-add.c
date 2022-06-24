#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 *
 * Description: If no number is passed to function, print 0.
 * if one of arguments contain non-digits, print Error
 *
 * Return: 1 if error, 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
