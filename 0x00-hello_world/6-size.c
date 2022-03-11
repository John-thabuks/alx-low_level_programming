#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: should be a 0
 */
int main(void)
{
printf("size of a char: %d bytes(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d bytes(s)\n", sizeof(long int));
printf("size of a long long int: %d bytes(s)\n" sizeof(long long int));
printf("size of a float: %f bytes(s)\n", sizeof(float));
return (0);
}
