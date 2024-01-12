#include <stdio.h>

/**
* main - display 50 fibonacci value;
*
* Description: using main to display 50
* fibonacci values;
* Return: 0;
*
*/
int main(void)
{
	unsigned long res, num1 = 0, num2 = 1, i = 0;

	while (i < 50)
	{
		res = num1 + num2;
		if (i == 49)
		{
			printf("%ld\n", res);
		}
		else
		{
			printf("%ld,", res);
		}
		num1 = num2;
		num2 = res;
		i++;
	}
	return (0);
}
