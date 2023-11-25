#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This check the typr of endian
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
