#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length printed
 *
 * @s: pointer
 *
 * Return: string length
 */

int _strlen(char *s)

{
	int m = 0;

	for (; *s != '\0'; s++)
	{
		m++;
	}

	return (m);
}
