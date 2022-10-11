#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info on a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
