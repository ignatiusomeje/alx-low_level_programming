#include "main.h"

/**
* print_line - print a line on the terminal
*  @n: number of times to print the line
* Return: void
*/
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');

		i++;
	}
	if (!(n == 0 || n < 0))
		putchar('\n');
}
