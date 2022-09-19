#include <stdio.h>
#include <stdlib.h>

/**
 * atoi - convert a string to integer
 * @s: input
 * Return: 0
 */


int main(void)
{
	int i;
	char *s;

	s = "122";
	i = atoi(s);

	printf("i = %d\n", i);

	return (0);
}
