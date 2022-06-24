#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: holds the number of arguments passed
 * @argv: pointer to string of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
