#include "main.h"
#include <stdio.h>

/**
* print_times_table - prints n number of tables
* starting from 0;
* @n: the number of tables to prints;
* Return: void;
*
*/
void print_times_table(int n)
{
	int i, j;

	if (!(n < 0 && n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int mult = i * j;

				if (j == n)
				{
					if (mult < 10)
						printf("   %d\n", mult);
					else if (mult >= 100)
						printf(" %d\n", mult);
					else
						printf("  %d\n", mult);
				}
				else
				{
					if (mult < 10)
						j == 0 ? printf("%d,", mult)
						: printf("   %d,", mult);
					else if (mult >= 100)
						printf(" %d,", mult);
					else
						printf("  %d,", mult);
				}
			}
		}
	}
}
