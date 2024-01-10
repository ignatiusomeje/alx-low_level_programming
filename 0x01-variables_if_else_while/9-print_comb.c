#include <stdio.h>
/**
 * main - prints the combination of numbers
 * Description: using main function
 * this program prints out all possible
 * combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 10)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
