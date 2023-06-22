#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * starting from 00:00 to 23:59.
 * return: void
 */
void jack_bauer(void)
{
	int hour = 0, min;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
			min += 1;
		}
		hour += 1;
	}
}
