#include "main.h"

/**
 * rot13 - tThis would encrypt a string
 * @str: String to be encrypted
 *
 * Return: Char value
 */

char *rot13(char *str)
{
	while (str[i] != '\0')
	{
		str = transform(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform - This would help us to transform what we have
 * @x: character to be transformed
 *
 * Return: the trasformed char
 */

char transform(char x)
{
	char let[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char change[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == let[i])
		{
			replacement = change[i];
			break;
		}
		i++;
	}
	return (replacement);
}
