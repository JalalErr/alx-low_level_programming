#include "main.h"

/**
 * main - principale function.
 * @str: array containe the string.
 *Return: value 0.
 */

int main(void)
{
/*Variable declaration section: */
char str[] = "_putchar";

/*code section: */
write(1, str, sizeof(str) - 1);
_putchar('\n');
return (0);
}
