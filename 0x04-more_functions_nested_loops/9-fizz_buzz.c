#include "main.h"

/**
*
*
*
*/
int main(void)
{
	int i;
	char buzz[] = "Buzz";
	char fizz[] = "Fizz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s\n", buzz);
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("%s ", fizzbuzz);
		}
		if ((i % 3) == 0)
		{
			printf("%s ", fizz);
		}
		else if ((i % 5) == 0)
		{
			printf("%s ", buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
}
