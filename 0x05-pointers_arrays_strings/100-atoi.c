#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: string to be converted
 * Return: The int converted from the string
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sigh = 1;

	do {
		if (*s == '-')
			sigh *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sigh);
}
