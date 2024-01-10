#include <stdio.h>
/**
 * main - prints the alphabets in reverse order
 * Description: using main function
 * this program prints out the aphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
