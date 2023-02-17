#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char x = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	while (x <= 'z')
	{
		putchar(x);
		x += 1;
	}
	putchar(10);

	return (0);
}
