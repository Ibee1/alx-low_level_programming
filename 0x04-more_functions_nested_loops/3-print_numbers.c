#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 * 2 nad 4 not allowed
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
