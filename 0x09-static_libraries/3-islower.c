/*
 *function that checks for lowercase character.



 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: is the charcter to be checked
 *
 * Return: 1 if character is lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
