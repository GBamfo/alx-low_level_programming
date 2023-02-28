#include "main.h"
/**
 * print_array - A function that prints the elements of an array
 * @a: a variable
 * @n: number of elements in the array
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
