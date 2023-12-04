#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's name, age and owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef as new name for struct dog
 */
typedef struct dog dog_t;

#endif
