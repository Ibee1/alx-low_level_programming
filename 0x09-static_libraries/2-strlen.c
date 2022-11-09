#include "main.h"

/**
 * _strlen - return length of a string
 * @s : is the character
 * Return:wq
 * : length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

