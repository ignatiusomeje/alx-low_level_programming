#include "main.h"
#include <stdio.h>

/**
* times_table - prints 9 times table starting from 0;
* Return: void
*/
void times_table(void)
{
	int innercount, outercount;

	for (outercount = 0; outercount <= 9; outercount++)
	{
		for (innercount = 0; innercount <= 9; innercount++)
		{
			int n = outercount * innercount;

			if (n < 10)
			{
				if (innercount == 9)
				{
					_putchar(n +'0');
					/**printf("%d\n", n);*/
				}
				else
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					/**printf("%d,  ", n);*/
				}
			}
			else
			{
				if (innercount == 9)
				{
					_putchar(n +'0');
					/**printf("%d\n", n);*/
				}
				else
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					/**printf("%d, ", n);*/
				}
			}
		}
		_putchar('\n');
	}
}
