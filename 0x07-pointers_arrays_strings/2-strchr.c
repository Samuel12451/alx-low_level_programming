#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer c
 */

char *_strchr(char *s, char c)
{
	int m = 0;

	while (*(s + m) != '\0')
	{
		if (*(s + m) == c)
		{
			return (s + m);
		}

		m++;
	}
	if (c == '\0')
	{
		return (s + m);
	}
	return (NULL);
}
