#include "main.h"

/**
 *  *_strpbrk - Searches a string for any of a set of bytes
 *  @s: string
 *  @accept: string to match
 *  Return: Pointer to the byte in `s` that matches one of the
 *  bytes in `accept` or NULL is no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;	/* for iterating through the string 's' */
	while (s[i] != '\0')
	{
		j = 0;		/* iterate through the string 'accept' */
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
