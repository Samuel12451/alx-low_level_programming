#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix
 * @s: string
 * @accept: source
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cou = 0;
	unsigned int pr = 0;
	int a, b;

	a = 0;
	b = 0;

	while (*(s + a) != '\0')
	{
		b = 0;
		pr = cou;
		while (*(accept + b) != '\0')
		{
			if (*(s + a) == *(accept + b))
			{
				cou++;
			}
			b++;
		}
		if (pr == cou)
		{
			break;
		}
		a++;
	}

	return (cou);
}
