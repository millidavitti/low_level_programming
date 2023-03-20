#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strlen - string length
 *@str: string
 *Return: int
 */

int _strlen(char *str)
{
int i;
for (i = 0; str[i]; i++)
;
return (i);
}

/**
 *_strcpy - copy string
 *@copy: copy
 *@src: original
 *Return: char*
 */
char *_strcpy(char *copy, char *src)
{
int i;
for (i = 0; src[i]; i++)
copy[i] = src[i];
copy[i] = '\0';
return (copy);
}

/**
 *new_dog - creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *lname, *lowner;
lname = malloc(sizeof(char *) * (_strlen(name) + 1));
lowner = malloc(sizeof(char *) * (_strlen(owner) + 1));
if (!lname)
{
free(lname);
return (NULL);
}
else
lname = _strcpy(lname, name);
if (!lowner)
{
free(lowner);
return (NULL);
}
else
lowner = _strcpy(lowner, owner);

dog = malloc(sizeof(dog_t *));
if (!dog)
return (NULL);

dog->name = lname;
dog->age = age;
dog->owner = lowner;

return (dog);
}
