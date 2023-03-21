#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in lowercase
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (i = 97; i <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

