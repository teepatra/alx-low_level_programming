#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers followed by newline.
 * @n: number of integers passed
 * @separator: string to printed between numbers
 * @...: A variable of number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}



