#include "main.h"

/**
* print_square - print the square of a number
* @size: the number to square
* Return: void
*/
void print_square(int size)
{
	if (size > 0)
	{
		int sqnum = size * size;

		while (sqnum-- >= 0)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
