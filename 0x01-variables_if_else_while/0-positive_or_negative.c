#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints whether a number is zero or positive or negative
 * Description: using the main function
 * this program prints out whether a n is zero or positive or negative
 * Return: 0(Always success)
 */
int main
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
	{
		printf("%d is positive", n);
	}
	return (0);
}
