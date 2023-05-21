#include <unistd.h>
#include <string.h>

/**
 * main - Prints a quote to the standard error.
 * Return: Always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(quote);

	write(2, quote, len);

	return (1);
}
