#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two string
 * @dest: Input value
 * @src: Input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	n =  0;
	while (src[n] != '\0')
	{
		dest[k] = src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (dest);
}
