#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: prints '\' n number of times
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int l, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			for (l  = 1; l < b; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
