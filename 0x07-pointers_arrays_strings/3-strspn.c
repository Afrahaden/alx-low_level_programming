#include "main.h"

/**
 *  _strspn - gets the length of prefix substring
 *  @s: string to traverse
 *  @accept: source string
 *  Return: number of matching bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] >= '\0'; j++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (count);
}
