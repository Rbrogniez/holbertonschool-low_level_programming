#include "main.h"
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char str[8] = "_putchar";
int x;
for (x = 0 ; str[x] != '\0' ; x++)
{
_putchar(str[x]);
}
_putchar ('\n');

return (0);

}
