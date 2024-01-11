#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print natural number to 98;
* @n: the number to start from;
* Return: void;
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
