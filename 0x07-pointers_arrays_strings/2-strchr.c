#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to string to search through
 * @c: character to locate
 * Return: pointer to occurence of c
 */
char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
