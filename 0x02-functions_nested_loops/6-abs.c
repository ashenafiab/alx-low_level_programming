#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @a: The input number to check
 * Return: int.
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
		return (a);
	}
	else
		return (a);
}

