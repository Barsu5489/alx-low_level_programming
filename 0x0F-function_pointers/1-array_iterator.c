#include "function_pointers.h"

/**
 * array_iterator - execute on each param
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
