#include <stdio.h>

/**
 * main - function
 * @argc: the number of the arguments
 * @argv: the array of arguments
 * Return: true
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
