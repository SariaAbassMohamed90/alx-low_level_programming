#include "main.h"

/**
 * _isupper - Uppercase Letters
 * @c: Char to check
 * Return: 1 for or 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
