#include "main.h"

/**
* print_diagonal - print diagonal line;
* @n: number of
*
*
*/
void print_diagonal(int n)
{
	if ((n < 0) || (n == 0))
		_putchar('\n');

	while (n-- > 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
