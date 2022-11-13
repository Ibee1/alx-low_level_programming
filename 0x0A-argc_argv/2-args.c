#include <stdio.h>

/**
 * main - prints all recieved arguments
 * @argc: no. of command line arguments
 * @argv: command line arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
