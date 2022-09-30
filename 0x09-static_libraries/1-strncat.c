#include "main.h"

/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_len++] = src[ind];

	return (dest);
}
