#include "main.h"

/**
* print_diagonal - print diagonal line;
* @n: number of times to print
* Return: void;
*
*/
void print_diagonal(int n)
{
	int gap, num = 0;

	if (n > 0)
	{
		while (num < n)
		{
			gap = 0;
			while (gap < num)
			{
				_putchar(' ');
				gap++;
			}
			_putchar('\\');
			_putchar('\n');
			num++;
		}
	}
	else
		_putchar('\n');
}
