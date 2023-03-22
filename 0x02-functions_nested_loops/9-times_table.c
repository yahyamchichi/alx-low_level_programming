#include "main.h"

/**
 * times_table -  print the 9 times table, starting with 0.
 *
 * Return: no return
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i <= 10; i++)
	{
		result = i * 9;

		if (result < 10)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
