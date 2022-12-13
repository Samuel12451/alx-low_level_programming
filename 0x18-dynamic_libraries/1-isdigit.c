#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: check for digit
 *
 * Return: 1 for digit, 0 for not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
