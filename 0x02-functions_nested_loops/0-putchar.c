#include "main.h"
/**
* main - Print "_putchar" followed by a new line.
*Return: 0

*/

int main(void)
{
char main[] = "Main";
int i = 0;
while (main[i] != '\0')
{
_putchar(main[i]);
i++;
}
_putchar('\n');
return (0);
}
