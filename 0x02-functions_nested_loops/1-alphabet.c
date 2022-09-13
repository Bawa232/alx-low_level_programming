#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: Returns void.
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
		_putchar(lower);
	lower++;

	return (void);
}
