#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  multiplies two numbers.
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int m;
	int j;
	int k;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (m = 0 ; m < argc ; m++)
		{
			if (m == 1)
			{
				j = atoi(argv[m]);
			}
			else if (k == 2)
			{
				k = atoi(argv[m]);
			}
		}
	mult = j * k;
	printf("%d\n", mult);
	}
	return (0);
}
