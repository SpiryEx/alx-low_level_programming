#include <stdio.h>
/**
 * main -  program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(S)\n", (unsigned long)size(b));
	printf("size of a long long int: %lu bytes(S)\n",(unsigned long)size(d));
	printf("size of a float: %lu bytes(S)\n",(unsigned long)size(f))d;
	return (0);

}	

