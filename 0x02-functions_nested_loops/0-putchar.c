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
	char ch[100] = "_putchar";
	int i = 0;

	while (i<100)
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
