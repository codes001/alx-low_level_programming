#include "main.h"

/**
 * _islower - function to print lowercase
 * @c: parameter to be printed
 * Return: if 1 is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
