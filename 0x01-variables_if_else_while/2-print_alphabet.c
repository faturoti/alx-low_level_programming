#include <stdio.h>
/**
 * main - This is the main metho
 * 
 * Description: This helps to generate a random numbe
 * Return: returns 0 to end main method
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if ( a == 'z')
			putchar('\n');
	}
	return (0);
}
