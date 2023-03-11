#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed into it.
 * @argc: number of arguments passed
 * Return: Always 0
 * @argv: arguments passed here
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
