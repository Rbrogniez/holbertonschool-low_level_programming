#include "main.h"
/**
 * string_toupper - changes all lowercase letter of a string
 *@s: string modify
 *Return : the resulting string
 */

char *string_toupper(char *str)

{
	int i;

	 for(i=0; str[i]!='\0'; i++)
	{

	if(str[i]>='a' && str[i]<='z')

		{
		str[i] = str[i] - 32;
		}
	}

	return str;
}
