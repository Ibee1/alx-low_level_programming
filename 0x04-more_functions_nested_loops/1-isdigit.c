#include "main.h"
/**
 * _isdigit - check for digit 0 through 9
 * @c: is the character to be checked
 * Return: 1 if c is digit otherwise o
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
