#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of the times table
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		_putchar('0'); // Print the first column

		for (j = 1; j <= n; j++)
		{
			k = i * j;

			_putchar(',');
			_putchar(' ');

			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10) % 10 + '0');
				_putchar(k % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
