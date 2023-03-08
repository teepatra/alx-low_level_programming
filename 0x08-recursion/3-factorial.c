#include "main.h"
/**
 * factorial - description
 * @n: number to find factorial for.
 *
 * Return: factorial as an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
