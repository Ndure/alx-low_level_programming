#include "main.h"

/**
 * _isupper - This function  checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else retrun 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
