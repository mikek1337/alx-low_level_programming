#include "main.h"

/**
 * jack_bauer - the guy that make the clock tick
 *
 * Return: void
 */
void jack_bauer(void)
{
	 int i;
	 int j;
	 int k;
	 int x;
	 int y;
	for (i = 0; i < 1440; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			for (k = 0; k <= 3; k++)
			{
				for (x = 0; x <= 5; x++)
				{
					for (y = 0; y <= 9; y++)
					{
						_putchar(j % 10 + '0');
						_putchar(k % 10 + '0');
						_putchar(':');
						_putchar(x % 10 + '0');
						_putchar(y % 10 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

