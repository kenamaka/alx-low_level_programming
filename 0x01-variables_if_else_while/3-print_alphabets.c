#include <stdio.h>

/**
 * main - Prints the alphabet
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for (i = 0; i < 52; i++)
	{
		putChar(alp[i]);
	}
	putChar('\n');
	return (0);
} 
