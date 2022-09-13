#include "main.h"

/**
 * main - program that prints Anything.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_name[9] = "Anything";

	while (n < 9)
	{
		_putchar(str_name[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}

