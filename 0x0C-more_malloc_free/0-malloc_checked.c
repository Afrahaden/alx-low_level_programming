#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * Description: return a pointer to the allocated memory.
 * If malloc fails, cause normal process termination with a status value of 98
 *
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
