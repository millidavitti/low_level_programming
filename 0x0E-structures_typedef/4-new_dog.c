#include "dog.h"
#include <stddef.h>
/**
 *new_dog - creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog  = struct dog;

if (!dog)
return (NULL);
dog->name = name;
dog->age = age;
dog->owner = owner;

return (dog);
}
