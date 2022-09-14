#include "main.h"
/**
* putchar - Print "_putchar" followed by a new line.
* c char "c" for "_inputchar"
*Return: 0

*/
int putchar(void)
{
char putchar[] = "_putchar";
int i = 0;
while (putchar[i] != '\0')
{
_putchar(putchar[i]);
i++;
}
_putchar('\n');
return (0);
}
