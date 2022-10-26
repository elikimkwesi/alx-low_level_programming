#include "main.h"

/**
 * rev_string - reverse strings
 * @s: intput
 * Return: reversed string
 */
void rev_string(char *s)
{
	char rs = s[0];
	int d = 0;
	int i;

	while (s[d] != '\0')
		d++;
	for (i = 0; i < d; i++)
	{
		d--;
		rs = s[i];
		s[i] = s[d];
		s[d] = rs;
	}
}

