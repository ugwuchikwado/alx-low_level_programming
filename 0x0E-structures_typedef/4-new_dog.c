#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *spec_dog;
	int afa_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		afa_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		spec_dog = malloc(sizeof(dog_t));

		if (spec_dog == NULL)
			return (NULL);

		spec_dog->name = malloc(sizeof(char) * afa_l);

		if (spec_dog->name == NULL)
		{
			free(spec_dog);
			return (NULL);
		}

		spec_dog->owner = malloc(sizeof(char) * own_l);

		if (spec_dog->owner == NULL)
		{
			free(spec_dog->name);
			free(spec_dog);
			return (NULL);
		}

		spec_dog->name = _strcpy(spec_dog->name, name);
		spec_dog->owner = _strcpy(spec_dog->owner, owner);
		spec_dog->age = age;
	}

	return (spec_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

