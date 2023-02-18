#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits,
 * and ends with a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

		for (i = 0; i < 8; i++)
		{
			for (j = i + 1; j < 9; j++)
			{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (i == 6 && j == 7 && k == 8)
					{
					putchar('\n');
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
			}
			}
		}
	return (0);
}
