#include "main.h"

/**
 * 10x print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i,x;

	for(i = 0; i <= 10 ; i++)
	{
		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
