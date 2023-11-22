#include "main.h"

/**
 * _islower - function cheack the alphabet if it islower or not.
 * @c: the input function.
 * Return: 1 if the alphabet is islower, 0 if not.
 */

int _islower(int c)
{
/* Code section: */
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
