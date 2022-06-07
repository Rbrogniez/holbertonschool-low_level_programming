#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char charType;
int intType;
long int longintType;
float floatType;
printf("Size of a char: %z bytes\n", sizeof(charType));
printf("Size of a int: %z bytes\n", sizeof(intType));
printf("Size of a long int: %z bytes\n", sizeof(longintType));
printf("Size of a float: %z bytes\n", sizeof(floatType));
return (0);
}
