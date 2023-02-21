#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c prints the output
 *
 * Return: 1 on Success
 * return 1 on error, and errno is set as welli
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
