#ifndef INIT_H
#define INIT_H
#include<stdlib.h>
#include<stddef.h>
#include "main.h"
#include "dog.h"

/*
 * init_dog - initializes and object of type struct dog with given input
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}

#endif

