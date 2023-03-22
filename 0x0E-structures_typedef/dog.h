#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - description of a dog owner
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: Description of owner
 *
 * Description: this is to know the details of a the dog and it's
 * owner to avoid mix ups
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
