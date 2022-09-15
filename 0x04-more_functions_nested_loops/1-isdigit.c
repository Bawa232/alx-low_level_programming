#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: input character
 * Return: Returns 1 if c is a digit, 0, 0therwise.
 */

int _isdigit(int c)
{
	for (int digit = 0; digit < 10; digit++)
	{
		if (c == digit)
			return (1);
	}

	return (0);
}
