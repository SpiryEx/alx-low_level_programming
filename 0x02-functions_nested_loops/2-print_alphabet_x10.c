#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowecase
*/
void print the_alphabet_x10
{

	int count = 0;
	char letter;

	while (count++ <= 9)
	{	
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('/n');
	}
 	
