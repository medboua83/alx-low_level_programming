#include "main.h"

/**
 * swap_int  -  swaps the values of two integers
 * @a : first  POiNTER OF  integer
 * @b : second pointer of integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
