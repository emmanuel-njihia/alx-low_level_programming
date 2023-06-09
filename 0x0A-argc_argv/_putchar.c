#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the caharacter to print
 *
 * Return: On success 1,
 * On error, -1 is returned an errno is set appropriately
 */

int _putchar(cahr c)

{
	return (write(1, &c, 1));
}
