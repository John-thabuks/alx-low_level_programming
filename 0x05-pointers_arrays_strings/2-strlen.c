#include "main.h"

/**
 * _strlen - what is the length of a string.
 * @str: The variable name that gets length.
 *
 * Return: @str length.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
