#include <stdio.h>
/**
 * main - printing the single digits of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}

