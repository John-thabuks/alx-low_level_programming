#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - output
 *Return:0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstd = n % 10;
	if (lstd < 6 && lstd != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	else if (lstd > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	else
	printf("Last digit of %d is %d and is 0\n", n, lstd);

	return (0);
}
