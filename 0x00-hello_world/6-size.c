#include <stdio.h>
/**
 * main - entry point
 *
 * description: 6-size.c
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	printf("size of a char: %lu bytes(s)\n", sizeof(char));
	printf("size of an integer: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytes(s)\n", sizeof(float));

	return (0);
}
