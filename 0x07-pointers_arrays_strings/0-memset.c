#include "main.h"
/**
 * _memset - fill a block of memeory with a value
 * @a: starting address of memory
 * @d: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */
char *_memset(char *a, char d, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		a[i] = d;
		n--;
	}
	return (a);
}
