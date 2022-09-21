#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: first pointer
 * @s2: second pointer
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int counter, varcom;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	varcom = s1[counter] - s2[counter];

	return (varcom);

}
