#include "main.h"

/**
 * _puts - string put, a new line followed
 *
 * @str: string input
 * Return: no return
 */

void _puts(char *str)

{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
