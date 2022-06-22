#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: success
 */

int main(int argc, char **argv)
{

	if (argc == 3)

	{
	int numb1 = atoi(argv[1]);
	int numb2 = atoi(argv[2]);

	printf("%d\n", numb1 * numb2);

	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
