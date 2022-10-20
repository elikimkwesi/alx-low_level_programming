#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char lca;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lca = 'a'; lca <= 'z'; lca++)
			_putchar(lca);
		_putchar('\n');
	}
}
