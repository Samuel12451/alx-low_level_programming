#include "main.h"


/**
 * main - prints _putchar
 *
 *Description: printing _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i<100)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
