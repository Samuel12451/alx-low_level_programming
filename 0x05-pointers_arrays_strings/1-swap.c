#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @s: pointer 1
 * @m: pointer 2
 * Return: void
 */

void swap_int(int *s, int *m)
{
	int x = *s;
	*s = *m;
	*m = x;
}
