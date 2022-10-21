#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @a: number of '_' to be printed
 */
void print_line(int a)
{
	int lin;

	if (a > 0)
	{
		for (lin = 0; lin < a; lin++)
			_putchar('_');
	}

	_putchar('\n');
}
