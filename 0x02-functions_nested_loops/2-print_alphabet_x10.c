#include "main.h"

/**
 * print_alphabet_x10 - print letters a-z times 10
 *
 * Return: Returns void.
 */

void print_alphabet_x10(void)
{

	int a = 1;

	while (a <= 10)
	{
		char begin = 'a';
		char end = 'z';

		while (begin <= end)
			_putchar(begin++);
		a++;
		_putchar('\n');
	}
}
