#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the structure
 * Return: nothing
 */
void print_dog(struct dog *d)

{
if (d == NULL)
return;
if ((*d).name == NULL && (*d).owner == NULL)
printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", (*d).age);
else
{
printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
}
