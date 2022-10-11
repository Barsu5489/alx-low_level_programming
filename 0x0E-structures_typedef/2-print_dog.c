#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: pointer to struct
 * Return: Always 0
 */

void print_dog(struct dog *d)
{

		if (d != NULL)
		{
			if (d->name == NULL)
				printf("name: (nil)");
			else
				printf("Name: %s\n",  d->name);
				printf("Age: %f\n", d->age);
			if (d->owner == NULL)
				printf("owner: (nil)");
			else
				printf("Owner: %s\n", d->owner);
		}

}
