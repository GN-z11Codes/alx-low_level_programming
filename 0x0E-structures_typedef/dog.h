<<<<<<< HEAD
#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */

=======
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
*/
>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b
struct dog
{
	char *name;
	float age;
	char *owner;
};

<<<<<<< HEAD
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
=======
/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* struct dog */
>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b
