#include "main.h"

/**
 * swap_int - swap to value pointers
 * @a: first variable to swap
 * @b: second variable to swap
 */

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
