#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
/* Character variables have been declared already */

{
/* Statement to get desired result */

	for (; *haystack != '\0'; haystack++)
	{
/* We can define or declare a variable for v and s */
		char *v = haystack;
		char *s = needle;

		while (*v == *s && *s != '\0')
		{
			v++;
			s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
