#include <stdio.h>

/**
* main - display the sum of even fibonacci numbers;
*
* Description: using main function to display the even
* fibonacci numbers;
* Return: 0;
*/
int main(void)
{
	unsigned long res, num1 = 0, num2 = 1, sum = 0;

	while (i < 4000000)
	{
		res = num1 + num2;
		num1 = num2;
		num2 = res;
		if ((num1 % 2) == 0)
		{
			sum += num1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
