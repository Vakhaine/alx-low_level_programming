#include "main.h"

/**
 * _strspn - a function that gets the length of a prsfix substring
 * @s: value that bear a pointer
 * @accept: value that bear a pointer
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
/* Delaration and definition of variable parameters */
{
	unsigned int n = 0;
	int m;
/* Statements to reach desired result */

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
