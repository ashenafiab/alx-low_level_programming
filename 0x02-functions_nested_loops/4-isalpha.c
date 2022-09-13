#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 * @c: Character
 * Return: 1 if it is in alphabet else return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
