#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: the number of the arguments
 * @argv: the array of arguments
 * Return: true
 */

int main(int argc, char *argv[])
{
	int n1, n2, product;
	(void)argc;
	(void)argv;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	product = n1 * n2;
	printf("%d\n", product);
	return (0);
}
