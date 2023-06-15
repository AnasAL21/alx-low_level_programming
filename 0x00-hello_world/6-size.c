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
printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a int: %u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
