#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: a is an integer
 *
 * Return: integer
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
