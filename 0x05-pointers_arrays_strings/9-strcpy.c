#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int length = 0;
    int i = 0;

    while (src[length] != '\0')
    {
        length++;
    }

    for (; i < length; i++)
    {
        dest[i] = src[i];
    }

    dest[length] = '\0';

    return dest;
}
