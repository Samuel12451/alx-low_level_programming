#include "main.h"

/**
 * _strlen - returns length of string
 * @l: string
 * Return: length of string
 */

int _strlen(char *l)
{
	int len = 0;

	while (l[len] != '\0')
	{
		len++;
	}

	return (len);
}
