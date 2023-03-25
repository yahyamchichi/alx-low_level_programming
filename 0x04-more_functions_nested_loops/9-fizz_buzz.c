#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("F");
			_putchar("i");
			_putchar("z");
			_putchar("z");
			_putchar("B");
			_putchar("u");
			_putchar("z");
			_putchar("z");
			_putchar(" ");
		}
		else if (i % 3 == 0)
		{
			_putchar("F");
			_putchar("i");
			_putchar("z");
			_putchar("z");
			_putchar(" ");
		}
		else if (i % 5 == 0)
		{
			_putchar("B");
			_putchar("u");
			_putchar("z");
			_putchar("z");
			_putchar(" ");
		}
		else
		{
			int n = i;

			do
			{
				_putchar(n % 10 + '0');

				n /= 10;
			}
			while (n > 0)

			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
		}
	}
	_putchar("\n");
	return (0);
}
