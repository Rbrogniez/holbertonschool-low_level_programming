#include "main.h"
/**
 *_strcpy - copies the string pointed to by src
 *@dest: string 1 copy in dest
 *@src: string 2 copy of src
 */

char *_strcpy(char *dest, char *src)
{

int c;

{
for (c = 0; src[c] != '\0'; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return(dest);
}

}
