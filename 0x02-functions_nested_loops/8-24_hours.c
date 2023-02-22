#include "main.h"
/**
 * jack_bauer - Prints every minute minute of the day of jack Jack bauer
 *
 * Description: this function prints every minute of the day jack bauer,
 * 		starting for 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
			minute++;
		}
		minute = 0;
		hour++;
	}
}