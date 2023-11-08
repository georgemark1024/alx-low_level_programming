#ifndef PRINT_H
#define PRINT_H
#include "dog.h"
#include "main.h"

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

#endif

