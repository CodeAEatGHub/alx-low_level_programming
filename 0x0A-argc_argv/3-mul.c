#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to function
 * @argv: Array of arguments passed to the function
 *
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
