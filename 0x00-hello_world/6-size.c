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

	printf("The size of a char is: %lu. \n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu. \n", (unsigned long)sizeof(i));
	printf("The size of an long int is: %lu. \n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu. \n", (unsigned long)sizeof(d));
	printf("The size of a float is: %lu. \n", (unsigned long)sizeof(f));
	return (0);
}
