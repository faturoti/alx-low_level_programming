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

	printf("size of a char is: %lu byte(s). \n", (unsigned long)sizeof(c));
	printf("size of an int is: %lu byte(s). \n", (unsigned long)sizeof(i));
	printf("size of an long int is: %lu byte(s). \n", (unsigned long)sizeof(l));
	printf("size of a long long int is: %lu byte(s). \n", (unsigned long)sizeof(d));
	printf("size of a float is: %lu byte(s). \n", (unsigned long)sizeof(f));
	return (0);
}
