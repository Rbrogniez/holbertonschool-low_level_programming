#include "main.h"
/**
*_squretoot - function 2
*Return: result
*@y: test number
*@x: number n
*/

int _squareroot(int n, int x)

{
	if (n == x * x)
	return (x);
	return (_squareroot(n, x + 1));
}

/**
 * _sqrt_recursion - function
 * @n:number in main
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




