#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n:inout character
 * Return: Returns 0, 1 or -1
 */

int print_sign(int n);
{
	if (n > 0)
	{ _putchar('+');
		return (1);
	}
	else if (n == 0)
	{ _putchar('0');
		return (0);
	}


	return (-1);
}
