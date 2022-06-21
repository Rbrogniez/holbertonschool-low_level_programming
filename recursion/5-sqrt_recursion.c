#include "main.h"
/**
*_squareroot - function 2
*Return: result
*@n: number
*@x: number
*/

int _squareroot(int n, int x)

{
	if (n == x * x)
	return (x);
	return (_squareroot(n, x + 1));
}

/**
 * _sqrt_recursion - function
 * @n:number
 * Return: result
 */

int _sqrt_recursion(int n)

{
	int x = 0;

	if (n < 0)
	return (-1);
	if (n == 1)
	return (1);
	return (_squareroot(n, x));
}




