#include "function_pointers.h"
/**
 * @brief
 *
 * @array:
 * @size:
 * @action:
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t boucle;
	if (!array || !action)
	return;

	for (boucle = 0 ; boucle < size ; boucle++)

	action(array[boucle]);
}

