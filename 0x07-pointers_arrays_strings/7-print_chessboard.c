#include "main.h"

/**
 * print_chessboard - Entry point
 * a function that prints the chessboard.
 * @a: array
 * Return: Void expression
 */

void print_chessboard(char (*a)[8])

{
/* Declare and define local variables */

	int c;
	int h;

/* Statement to get desired result */

	for (c = 0; c < 8; c++)
	{
		for (h = 0; h < 8; h++) /* nested for statement */
			_putchar(a[c][h]);
		_putchar('\n');
	}
}

