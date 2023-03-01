#include "main.h"

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;

	}
	dest[x + y] = '\0';

	return (dest);
}
