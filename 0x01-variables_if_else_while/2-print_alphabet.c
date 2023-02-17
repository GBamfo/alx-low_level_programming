#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x += 1)
	{
		putchar(x);
		putchar(10);
	}

	return (0);
}
