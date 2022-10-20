#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int 10ten;
	char lca;

	for (10ten = 0; 10ten <= 9; 10ten++)
	{
		for (lca = 'a'; lca <= 'z'; lca++)
			_putchar(lca);
		_putchar('\n');
	}
}
