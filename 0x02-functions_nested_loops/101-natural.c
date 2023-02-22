#include <stdio.h>

/**
 * main - If we list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * prints sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, add = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			add += n;
	}

	printf("%d", add);
	printf("\n");

	return (0);
}
