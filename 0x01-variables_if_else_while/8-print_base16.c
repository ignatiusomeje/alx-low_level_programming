#include <stdio.h>
/**
 * main - prints the base 16 in lowercase
 * Description: using main function
 * this program prints out all base 16 numbers
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char l;

	l = 'a';

	for (i = 0; i < 16; i++)
	{
		if (i >= 10)
		{
			putchar(l);
			l++;
		} else
		{
		    putchar(48 + i);
		}
	}
	putchar('\n');
	return (0);
}
