#include "main.h"

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
				printf("%d", i * j);
			}
			else
			{
				printf("\t%d", i * j);
			}
		}
		printf("\n");
	}
}
