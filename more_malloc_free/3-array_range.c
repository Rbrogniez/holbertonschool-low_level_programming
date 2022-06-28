#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the smallest integer in the array
 * @max: the largest integer in the array
 *Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *ar;
	int index;
	int j = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);

	for (index = min; index <= max; index++)
	{
		ar[j] = index;
		j++;
	}

	return (ar);
}

