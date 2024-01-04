#include <stdio.h>

/**
* main - print the string in the printf function
*
* Description: using the main function to print
* sizes of different variable sizes
* Return: 0
*/
int main(void)
{
	int num;
	char character;
	float floatingpoint;
	long longing;
	long long longinglonging;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longing));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longinglonging));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatingpoint));
	return (0);
}
