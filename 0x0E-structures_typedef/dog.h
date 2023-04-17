#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dog's basic info
 *@name: First element
 *@age :Second element
 *@owner :Third element
 *Description : Define a new type struct dog with three elements
 */

struct dog
{
char *name;
double age;
char *owner;
};
/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

#endif
