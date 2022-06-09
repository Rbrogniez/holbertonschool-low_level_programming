#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int print_alphabet_x10(void)
{
char ch;
int x;
for (x = 0 ; x < 10 ; x++)

{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n'); 
}


return (0);

}
