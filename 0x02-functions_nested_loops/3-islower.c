#include "main.h"

/**
 * _islower - checks if c is lower case
 *@c: an input character
 * Return: Returns an integer.
 */

int _islower(int c)
{
	int number = 0;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		if (lower == 'c')
			number = 1;

	return (number);
}
