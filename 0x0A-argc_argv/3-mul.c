#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: arguments supplied
 * Return: always 1 if less than two arg var supplied otherwise 0.
 */
int main(int argc, char **argv)
{
	int x = 0, y = 0;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
