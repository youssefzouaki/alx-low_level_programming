#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int l, i, j, k;

	for (i = 48; i < 50 ; i++)
	{
		for (j = 48; j < 58; j++)
		 {
			 for (k = 48; k < 54; k++)
			 {
				for (l = 48; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar(' ');
					}
				}
			}
			for (j = 48; j < 52; j++)
			{
				for (k = 48; k < 54; k++)
				{
					for (l = 48; l < 58; l++)
					{
						_putchar(50);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar(' ');
					}
			}
		}
	}
}
