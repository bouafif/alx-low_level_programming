#include "main.h"
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: copy to
 * @src: compy from
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */
char _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
