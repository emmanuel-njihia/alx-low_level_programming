#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 * less than 4000000
 * Return: Nothing!
 */

int main(void)
{
        int i = 0;
        long j = 1, k = 2, sum = k;

        while (k + j < 4000000)
        {
        k += j;
	if ( k % 2 == 0)
        j = k - j;
        printf(", %ld", k);
        }
        ++i;
        }
        printf("%ld\n", sum);
        return (0);
}
