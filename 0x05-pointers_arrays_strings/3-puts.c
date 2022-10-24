#include "holberton.h"
/**
 * _puts - print a string followed by newline
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

