#include "main.h"

/**
 * _memcpy - Function that copies @n bytes from the memory area pointed to
 * @dest: the memory area that is needed to copy @src into.
 * @src: The buffer source to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	char *destination = dest;

	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
