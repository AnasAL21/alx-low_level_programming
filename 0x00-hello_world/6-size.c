#include <stdio.h>
/**
 * main - a C program that prints the size of various
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
