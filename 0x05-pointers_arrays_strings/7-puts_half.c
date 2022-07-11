#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: Prints a string in reverse
 * @s: Input string
 *
 * Return: 0
 */
void puts_half(char *s)
{
	unsigned long int i;

	for (i = (strlen(s) + 1) / 2 ; i <= strlen(s) - 1 ; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
