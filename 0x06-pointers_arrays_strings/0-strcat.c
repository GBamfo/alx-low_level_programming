#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
