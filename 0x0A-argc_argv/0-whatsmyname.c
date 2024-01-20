#include "main.h"

/**
* main - using main to print the name of a program;
* @argc: the number of arguments;
* @argv: the array of arguments;
* Return: int;
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
