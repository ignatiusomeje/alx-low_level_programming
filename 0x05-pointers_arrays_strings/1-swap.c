#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: the pointer to the first variable;
* @b: the pointer to the second variable;
* Return - void;
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
