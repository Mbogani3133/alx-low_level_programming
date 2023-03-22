#include "function_pointers.h"

/**
 *int_index - series for an integer
 *@array: input array
 *@size: size of an array
 *@cmp: comparison function
 *Return: index of integer in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size > 0 && cmp && size && array)
		for (b = 0; b <= size; b++)
			if (cmp(array[b]))
				return (b);
	return (-1);
}
