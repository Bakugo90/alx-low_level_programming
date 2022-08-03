#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structre for a dog
 * @name: a pointer to a name of my dog
 * @age: an age of my dog
 * @owner: a pointer to the owner of the dog
 *
 * Description: a struct to define an dog datatype
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
