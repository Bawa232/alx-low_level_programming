#include "main.h"

/**
 * swap_int - swapping address of two pointers
 *
 * Returns: Nada!
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
