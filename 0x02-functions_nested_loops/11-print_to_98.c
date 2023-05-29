#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line
 * @n: Starting number
 */
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
