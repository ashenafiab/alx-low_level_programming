#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lowercase x10
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

