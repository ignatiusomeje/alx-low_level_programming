#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whether a number is zero or positive or negative
 * Description: using the main function
 * this program prints out whether a n is zero or positive or negative
 * Return: 0(Always success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
