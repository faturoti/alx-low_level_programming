#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched.
 * @accept: the prefix to be measured.
 *
 * Return: the number of bytes in s which
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++);
	
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);

}
