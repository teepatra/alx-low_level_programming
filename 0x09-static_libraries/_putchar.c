#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
