#include "main.h"

/**
 * main - print the string _putchar
 *
 * Return: int
 */
int main(void)
{
	char c[10] = "_putchar\0";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
