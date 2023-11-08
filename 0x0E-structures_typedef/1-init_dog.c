#ifndef INIT_H
#define INIT_H

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		break;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif

