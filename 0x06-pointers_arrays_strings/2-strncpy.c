#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0';)
		dest_len++;
	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
