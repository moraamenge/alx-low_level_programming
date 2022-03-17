#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: uppercase character.
 *
 * Return: 1if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
