#include <stdio.h>

/**
* main - computes and prints the sum of natural numbers;
*
* Description: using the main funtion to compute and print the sum of
* all multiples of 3 or 5 between 1024;
* Return: 0;
*/
int main(void)
{
	int i = 1024;
	int j = 1;
	int sum;

	while (j < i)
	{
		if (!(j % 3) || !(j % 5))
		{
			sum += j;
		}
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
