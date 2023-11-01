#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: the number of the arguments
 * @argv: the array of arguments
 * Return: true
 */

int main(int argc, char *argv[])
{
	int i, sum, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
