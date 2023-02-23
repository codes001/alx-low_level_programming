#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
