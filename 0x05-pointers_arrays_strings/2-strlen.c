#include "main.h"
/**
 * _strlen - Prints out length of string
 * @s: String to check
 *
 * Return length of string
 */
int _strlen(const char *str)
{
	int length = 0;
	while (*str++)
		length++;

	return (length);
}
