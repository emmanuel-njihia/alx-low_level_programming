#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count array
 * @s: array of elements
 *
 * Return: 1
 */

int _strlen(char *s)


{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 *
 * Reurn: dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array that prints a string
 * @str: array of strings
 *
 * Return: pointer
 */

char *_strdup(char *str)

{
	char *dst;

	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == NULL)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
