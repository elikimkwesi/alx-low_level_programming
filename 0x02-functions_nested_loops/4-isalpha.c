#include "main.h"

/**
 * _isalpha - check whether is letter is an alphabet
 * @c: the letter to be checked
 *
 * Return: 1 if letter is alphabet, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
