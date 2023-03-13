#include "main.h"
#include <stdlib.h>

/**
 * _strdup - The function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Returna: a Pointer to string in memory.
 */

char *_strdup(char *str)
{
	int j;
	char *s;

	if (str == 0)
		return (0);
	for (j = 0; str[j]; j++)
		;
	s = malloc(sizeof(char) * (j + 1));
	if (s == 0)
		return (0);
	s[j] = '\0';
		/* printf("%d: %c\n", j, s[j]);*/
	while (j--)
	{
		s[j] = str[j];
		/*printf("%d: %c\n", j, s[j]);*/
	}
	return (s);
}
