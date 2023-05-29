#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence up to 91 terms
 *        with no hardcoding
 * Return: Always 0
 */
int main(void)
{
    unsigned long int i;
    unsigned long int bef = 1;
    unsigned long int aft = 2;
    unsigned long int bef1;
    unsigned long int bef2;
    unsigned long int aft1;
    unsigned long int aft2;

    printf("%lu", bef);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", aft);
        aft += bef;
        bef = aft - bef;
    }

    bef1 = (bef / 1000000000);
    bef2 = (bef % 1000000000);
    aft1 = (aft / 1000000000);
    aft2 = (aft % 1000000000);

    printf("%lu%09lu, %lu%09lu\n", bef1, bef2, aft1, aft2);

    return (0);
}
