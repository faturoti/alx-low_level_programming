#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the main metho
 * 
 * Description: This helps to generate a random numbe
 * Return: returns 0 to end main method
 */
int main(void)
{
	for (int a = 1; a < 27; a++)
	{
		putchar( tolower((char) a));
		if (a == 26)
			putchar("\n");
	}
	return (0);
}
