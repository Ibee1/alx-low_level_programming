#include "holberton.h"
/**
 * _puts - print a string followed by newline
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

