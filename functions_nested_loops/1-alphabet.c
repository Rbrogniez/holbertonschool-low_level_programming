#include <stdio.h>
/* more headers goes there */
/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

return;
}
