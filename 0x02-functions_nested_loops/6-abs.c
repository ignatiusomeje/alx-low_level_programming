#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer;
* @a: the paramater to compute its absolute value;
*
* Return: 0
*
*/
int _abs(int a)
{
	int n = a;

	if (n < 0)
	{
		n = n * -1;
		printf("%d\n", n);
	} else
	{
		printf("%d\n", n);
	}
	return (0);
}
