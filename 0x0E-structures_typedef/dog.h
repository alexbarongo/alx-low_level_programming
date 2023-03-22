#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Short description
 * @name: name of the dog.
 * @owner: owner of the dog.
 * @age: age of the dog.
 *
 * Description: structure that creates details about a dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #ifndef _DOG_H_ */
