#include "main.h"

/**
* main - using main to print the name of a program;
* @argc: the number of arguments;
* @argv: the array of arguments;
* Return: int;
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 0;

	if (argc > 1)
	{
		while (i <= 2)
		{
			mul *= *argv[i];

			printf("%d", mul);
			i++;
		}
			return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
