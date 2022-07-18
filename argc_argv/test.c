#include <stdio.h>
#include "main.h"

int add (int x, int y)
 {
	return (x + y);
 }
int main ()
 {
	int a = 3;
	int b = 2;

	int result = add(a, b);

	printf("%d\n", result);

	return 0;
 }
