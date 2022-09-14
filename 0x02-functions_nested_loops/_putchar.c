#include "main.h"
#include <unistd.h>

/**
 * _putchar is supposed to write c to stdout
 * c is the charcter to be printed
 *
 * If there is an error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
