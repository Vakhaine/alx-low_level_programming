#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: the number of elements of array to be printed
 *void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

