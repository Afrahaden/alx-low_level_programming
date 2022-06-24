#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: arguments count
 * @argv: pointer to string of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
