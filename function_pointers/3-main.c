#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - performs simple operations.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operation == op_div || operation == op_mod) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(n1, n2));
	return (0);
}
