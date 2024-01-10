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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (!(i == 1 && j == 0) && !(i == j))
			{
				putchar(48 + i);
				putchar(48 + j);
				if (!(i == 9 && j == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
