#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: input
 * @size: input
 *
 * Return: Void expression
 */

void print_diagsums(int *a, int size)
/*the above prototype with function print_diagsums*/
/* and parameters of global variable types and names*/
{
/* Declare and define the local variables */
	int sum1;
	int sum2;
	int y;

	sum1 = 0;
	sum2 = 0;

/* Statement to get desired results */
	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
