#include "main"

/**
 * _islower - checks if c is lower case
 *@c: an input character
 * Return: Returns an integer.
 */

int _islower(int c)
{
	char lower = 'a';

	while (lower <= 'z')
		if (lower == 'c')
			return (1);
		else
			return (0);
	lower++;

	return (0);
}
