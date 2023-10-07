#include <stdio.h>
/**
 *main - This is the main function
(*Description: Just dey play)?
 *Return: This method return 0 to go back to main
 */
int main(void)
{
	int i;
	double d;
	float f;
	long l;
	char c;

	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of an long int: %lu byte(s) \n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d));
	printf("byte(s)\n");
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
