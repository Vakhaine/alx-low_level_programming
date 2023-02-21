#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59 (take note of hour and minute).
 *  Return: 24:00 clock (Success)
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++) /* starting from 00:00 to 23:59 hour */
	{
		for (min = 0; min < 60; min++) /* every hour in min*/
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
