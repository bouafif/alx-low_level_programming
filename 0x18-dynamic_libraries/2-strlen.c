#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: input string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
