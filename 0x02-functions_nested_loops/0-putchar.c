#include "main.h"

/**
 * main - program that prints Ashenafi.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;

	char str_name[8] = "Ashenafi";

	while (n < 8)
	{
		_putchar(str_name[n]);
		n += 1;
	}

	_putchar('\n');

	return (0);
}

