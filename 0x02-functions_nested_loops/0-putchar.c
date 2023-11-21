#include "main.h"

/**
 * _print_putchar - function that print the string.
 * @str: array containe the string.
 *Return: value 0.
 */

int _print_putchar(void)
{
/*Variable declaration section: */
int i;
char str[8] = "_putchar";

/*code section: */
for (i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
