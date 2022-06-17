#include "main.h"
/**
 *swap_int - swap a & b
 *@a: first value
 *@b: second value
 */

void swap_int(int *a, int *b)

{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
