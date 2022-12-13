#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer
 * @accept: pointer
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
