#include "main.h"
/**
 * _isdigit - searches for a digit.
 * @x: The number to be checked.
 * Return: 1 if digit, else 0.
 */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);

	else
		return (0);
}
