#include "main.h"

/**
 * print_alphabet_x10 - function prototype.
 * Description: function that print the alphabet x10 times.
 * Return : nothing.
 */

void print_alphabet_x10(void)
{
/* Declartion variable section: */
char i;
int j;
/* Code section : */
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
