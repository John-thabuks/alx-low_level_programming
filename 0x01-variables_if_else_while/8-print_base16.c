#include <stdio.h>
/**
 *main - print a hexadecimal
 *Return:0
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar("\n");
	}
	for (x = 'a'; x <= 'g'; x++)
	{
		putchar(x);
	}

	return (0);
}
