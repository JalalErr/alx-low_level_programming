#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (j = 0; j < n; j++)
		result += va_arg(arg, int);

	va_end(arg);

	return (result);
}
