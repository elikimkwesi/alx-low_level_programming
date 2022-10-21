#include "main.h"

/**
 * print_numbers - print 0 through to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int f = 0;

	while (f < 10)
		_putchar(f++ + '0');

	_putchar('\n');
}
