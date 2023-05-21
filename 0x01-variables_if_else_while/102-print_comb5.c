#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putChar((i / 10) + 48 );
				putChar((i % 10) + 48);
				putChar('');
				putChar((j / 10) + 48);
				putChar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putChar(',');
					putChar('');
				}
				
				
			}
		}
	}
	putChar('\n');
	return (0);
}
