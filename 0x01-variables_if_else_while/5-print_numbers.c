#include <stdio.h>
/*
 * main - Prints all single digit numbers of base 10 starting from 0
 *
(* Description: the function prints out values from 0 - 10)?
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
