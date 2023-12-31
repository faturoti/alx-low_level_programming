#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to be used
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int match = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]) == NULL)
			break;
		match++;
		i++;
	}

	return (match);
}
/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c in s
 */

