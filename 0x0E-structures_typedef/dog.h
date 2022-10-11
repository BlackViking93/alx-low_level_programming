#ifndef DOG_H
#define DOG_H

/**
* struct dog - a new type: struct dog with the following elements
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
* Description: a struct that houses a string and a float
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

#endif /* DOG_H */
