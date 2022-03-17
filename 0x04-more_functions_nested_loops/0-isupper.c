#include "main.h"
/**
 * _isupper - is uppercase characters.
 * @x: is checked.
 * Return: 1 if uppercase, else 0.
 */
int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);

	else
		return (0);
}
