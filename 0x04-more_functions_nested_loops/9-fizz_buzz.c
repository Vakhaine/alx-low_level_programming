#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (j = 1; j <= 100; j++)
	{
		if (j == 100)
			printf("%s", b);
		else if ((j % 3 == 0) && (j % 5 == 0))
			printf("%s ", fb);
		else if (j % 3 == 0)
			printf("%s ", f);
		else if (j % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", j);
	}
	printf("\n");
	return (0);
}
