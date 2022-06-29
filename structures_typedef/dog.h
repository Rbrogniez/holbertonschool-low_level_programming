#ifndef DOG
#define DOG
/**
 * struct dog - doggo
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
