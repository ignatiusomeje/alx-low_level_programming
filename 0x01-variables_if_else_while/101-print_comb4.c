#include <stdio.h>
/**
 * main - prints the combination of two numbers
 * Description: using main function
 * this program prints out all possible
 * combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (!(i == 1 && j == 0) && !(i == j) && (i < j && j < k))
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
