#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space
 * Return: Always 0
 */
int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, fib3;

    printf("%lu, %lu", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        fib3 = fib1 + fib2;
        printf(", %lu", fib3);

        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
