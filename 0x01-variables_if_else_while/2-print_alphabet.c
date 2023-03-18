#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int v = 97;

	while (v <= 122)
	{
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);
}
