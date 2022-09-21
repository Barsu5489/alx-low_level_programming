#include "main.h"

/**
 * _strncat - function to append specific number of bytes
 * @dest: destination
 * @src: source
 * @n: size of bytes
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);

}
