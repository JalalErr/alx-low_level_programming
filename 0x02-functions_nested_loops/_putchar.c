#include "main.h"

/**
 * _putchar - function that print character.
 * @c: function input.
 * Return: 1.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
