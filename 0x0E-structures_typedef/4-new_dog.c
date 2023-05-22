#include "dog.h"
#include <stdlib.h>

/**
 * _strlen- returns length of string
 * @s: string input
 * Return: length of string
 * Description: returns string length
 **/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcpy- copies string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to buffer
 * @src:string
 * Description: copies string
 * Return: pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog- creates new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner: ofdog
 * Description: creates new dog
 * Return: new instance of dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
