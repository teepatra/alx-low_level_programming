#include "function_pointers.h"
/**
 * array_iterator - function that execute a function given sa parameter
 * @array: array printed
 * @size: size of array
 * @action: pointer for the two funtion
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
