#include "main.h"
/**
 * main - write a program that prints _putcher
 * 
 * Return: 0
 **/
int main(void)
{
	char task0[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(task0[x]);
	}
	_putchar('\n');

	return (0);
}
