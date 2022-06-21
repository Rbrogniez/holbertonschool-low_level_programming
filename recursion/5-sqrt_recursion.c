#include "main.h"
/**
*_sqrt_result - function 2
*Return: result
*@y: test number
*@x: number n
*/

int squareroot(int n, int x)

{
	if (n == x * x)
	return (x);
	return (squareroot(n, x + 1));
}
int _sqrt_recursion(int n)

{
	int x = 0;

	if (n < 0)
	return (-1);
	if (n == 1)
	return (1);
	return (squareroot(n, x));
}




