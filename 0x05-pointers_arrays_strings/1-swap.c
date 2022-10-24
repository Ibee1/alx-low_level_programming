#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @b : first pointer
 * @a : second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int cons = *a;
	*a = *b;
	*b = cons;
}
