#include <stdio.h>

/**
 * main -Entry point
 *
 * description: Program
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
