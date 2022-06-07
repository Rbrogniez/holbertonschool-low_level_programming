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
printf("Size of a char: %z byte(s)\n", sizeof(charType));
printf("Size of a int: %z byte(s)\n", sizeof(intType));
printf("Size of a long int: %z byte(s)\n", sizeof(longintType));
printf("Size of a long long in: %z byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %z byte(s)\n", sizeof(floatType));
return (0);
}
