#include "main.h"

/**
 * _isalpha - function to return 1 if c is in caps or small letters
 *@c: input character
 * Return: Returns 1 or 0
 */

int _isalpha(int c)
{
	char letter;
	char caps;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (caps = 'A'; caps <= 'Z'; caps++)
			if (c == letter || c == caps)
				return (1);
	}

	return (0);
}
