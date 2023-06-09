#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int w, n, k, len, p, digit;

	w = 0;
	n = 0;
	k = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (w < len && p == 0)
	{
		if (s[w] == '-')
			++n;

		if (s[w] >= '0' && s[w] <= '9')
		{
			digit = s[w] - '0';
			if (n % 2)
				digit = -digit;
			k = k * 10 + digit;
			p = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			p = 0;
		}
		p++;
	}

	if (p == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
