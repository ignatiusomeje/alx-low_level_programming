#include <stdio.h>

/**
*main- prints the biggest prime factor
*of a number
*
*Return: 0
*/

int main(void)
{
	long num = 612852475143;
	int chng;

	while (chng++ < num / 2)
	{
		if (num % chng == 0)
		{
			num /= 2;
			continue;
		}

		for (chng = 3; chng < num / 2; chng += 2)
		{
			if (num % chng == 0)
			num /= chng;

		}
	}
	printf("%ld\n", num);
	return (0);
}
