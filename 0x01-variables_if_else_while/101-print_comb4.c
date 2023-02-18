#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits,
 * and ends with a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

		for (i = '0'; i < 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
			for (k = j + 1; k <= 9; k++)
			{
				if ((i != j) != k)
				putchar(i);
				putchar(j);
				putchar(k);
					if (i == '7' && j == '8')
					continue;
					putchar(',');
					putchar(' ');
			}
			}
		}
	putchar('\n');
	return (0);
}
