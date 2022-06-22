#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: success
 */

int main(int argc, char **argv)
{
	int numb1 = atoi(argv[1]);
	int numb2 = atoi(argv[2]);

	if (argc == 3)

	{
	printf("%d\n", numb1 * numb2);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
