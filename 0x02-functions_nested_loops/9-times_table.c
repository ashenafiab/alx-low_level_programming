#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
	int row, column;
	int multi = 0;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			multi = (row * column);
			if (multi < 10)
			{
				if (column != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(multi + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			if (column != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

