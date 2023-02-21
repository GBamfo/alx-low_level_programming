#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: a function that prints 10 times the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		x++;
	}
}
