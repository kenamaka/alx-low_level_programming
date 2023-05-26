#include "main.h"

/**
 * _idigit - check if numbers are 0 - 9
 * @c: char to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _idigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
