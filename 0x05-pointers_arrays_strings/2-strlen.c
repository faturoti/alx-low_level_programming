#include "main.h"
/**
 * _strlen - Prints out length of string
 * @str: String to check
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
