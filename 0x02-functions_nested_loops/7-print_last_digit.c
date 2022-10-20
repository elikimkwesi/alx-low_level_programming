#include "main.h"


/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last number
 */
int print_last_digit(int n)
{
	int ld = n % 15;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);

}
