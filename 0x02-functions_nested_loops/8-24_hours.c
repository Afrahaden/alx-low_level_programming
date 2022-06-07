#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int min;
	int hour;
	int i, j, k, l;

	for (hour = 0; hour < 24; hour++)
	{
		i = hour / 10; /* doubles digit in hours*/
		j = hour % 10; /* singles digit */

		for (min = 0; min < 60; min++)
		{
			k = min / 10; /* doubles digit ni minutes */
			l = min % 10; /* singles digit */

			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
