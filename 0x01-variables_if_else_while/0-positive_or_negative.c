#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a variable n if it's positive or negative
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	} else if (n == 0)
	{
		printf("%d is zero\n");
	} else
	{
		printf("%d is negative\n");
	} return (0);
}
