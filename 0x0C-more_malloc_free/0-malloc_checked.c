#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - array of string
 * @b: memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
