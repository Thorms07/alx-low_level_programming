#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(i * j + '0');
			}
			else
			{
				_putchar('\t');
				_putchar(i * j + '0');
			}
		}
		_putchar('\n');
	}
}
