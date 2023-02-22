#include "main.h"

/**
* jack_bauer -  I'm federal agent Jack Bauer, and today is the longest day of my
*  life, a function that prints every minute of the day of Jack Bauer,
*   starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

