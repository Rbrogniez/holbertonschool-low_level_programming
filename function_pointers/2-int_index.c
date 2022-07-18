#include "function_pointers.h"
/**
 * @brief
 *
 * @param array
 * @param size
 * @param cmp
 * @return int
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	int boucle;

	for (boucle = 0 ; boucle < size ; boucle++)

	cmp(array[boucle]);

	return (*array);
}
