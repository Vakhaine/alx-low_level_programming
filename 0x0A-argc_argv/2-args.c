#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  prints all arguments it receives.
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
