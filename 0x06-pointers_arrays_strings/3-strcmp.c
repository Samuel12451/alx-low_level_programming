#include "main.h"

/**
 * _strcmp - Compare to string
 * @s1: first pointer
 * @s2: second pointer
 * Return: string
 */
int _strcmp(char *s1, char *s2);
{
	int count, varcom;

	count = 0;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	varcom = s1[count] - s2[count];

	return (varcom);

}
