#include "main.h"

/**
* jack_bauer - print out time
* Return: void
*/
void jack_bauer(void)
{
	int hour = 0, mins = 0, msrem, hrem;

	while (hour <= 23)
	{
		while (mins <= 59)
		{
			msrem = mins % 10;
			hrem = hour % 10;
			_putchar((hour / 10) + '0');
			_putchar(hrem + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar(msrem + '0');
			mins++;
			_putchar('\n');
		}
		hour++;
		mins = 0;
	}
}
