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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 6 && n != 0)
	printf("Last digit of %d is %d and is less than %d and not %d\n", n,n,6,0);
	else if(n > 5)
	printf("Last digit of %d is %d and is greater than %d\n", n,n,5);
	else
	printf("Last digit of %d is %d and is %d\n", n,n,0);

	return (0);
}
