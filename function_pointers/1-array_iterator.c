#include "function_pointers.h"
/**
 * @brief
 *
 * @param array
 * @param size
 * @param action
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t boucle;
	if (!array || !size)
	return;

	for (boucle = 0 ; boucle < size ; boucle++)

	action(array[boucle]);
}

