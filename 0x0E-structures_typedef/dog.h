#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: parameter of name
 * @age: parameter of age
 * @owner: parameter to propietary
 *
 * Description: Longer descripton
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
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
