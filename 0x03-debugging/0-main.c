#include <stdio.h>
#include </alx-low_level_programming/0x02-functions_nested_loops/main.h>
/**
 * main - check the code for Holberton School students
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
