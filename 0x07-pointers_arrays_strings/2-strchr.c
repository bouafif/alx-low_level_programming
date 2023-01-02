#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the first occurance of the character @c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}
