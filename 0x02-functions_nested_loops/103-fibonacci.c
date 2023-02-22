#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms that does not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	unsigned long sum_even = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum_even += fib2;
		}
		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%lu\n", sum_even);

	return (0);
}
