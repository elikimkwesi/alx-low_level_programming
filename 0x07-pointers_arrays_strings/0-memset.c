#include "main.h"
/**
 * _memset - fill a block of memeory with a value
 * @s: starting address of memory
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
