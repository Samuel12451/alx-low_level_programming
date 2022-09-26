#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: search
 * @needle: match
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, start;
	int nlen = 0;

	a = 0;
	b = 0;
	start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; b < nlen && haystack[a] == needle[b]; b++, a++)
		{
			if (b == 0)
			{
				start = a;
			}
			if (b == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
