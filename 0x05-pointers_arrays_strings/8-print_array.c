#include "main.h"

/**
* print_array - prints n element of array
* @a: array to fetch data to print;
* @n: number of elements to print;
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);

	}
}
