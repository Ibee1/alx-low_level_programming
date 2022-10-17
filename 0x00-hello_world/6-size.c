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
	printf("size of a char: %i bytes(s)\n", sizeof(char));
	printf("size of an integer: %i bytes(s)\n" sizeof(int));
	printf("size of a long int %i byte(s)\n" sizeof(long int));
	printf("size of a long long int %i bytes(s)\n" sizeof(long long int));
	printf("size of a float %i bytes(s)\n" sizeof(float));

	return (0);
}
