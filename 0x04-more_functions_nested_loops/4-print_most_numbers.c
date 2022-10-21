#include "main.h"

/**
 * print_most_numbers - print the number 0 to 9
 * witout 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int f = 0;

	while (f < 10)
	{
		if (f != 2 && f != 4)
			_putchar(f + '0');

		f++;
	}
	_putchar('\n');
}
