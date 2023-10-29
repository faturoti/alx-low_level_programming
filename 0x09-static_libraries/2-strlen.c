#include "main.h"
#include <stddef.h>
/**
 * _strlen - Prints out length of string
 * @str: String to check
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
