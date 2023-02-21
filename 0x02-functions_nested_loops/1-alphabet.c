#include "main.h"
/**
 * main - printing the alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x += 1;
	}
	_putchar(10);
	return (0);
}
