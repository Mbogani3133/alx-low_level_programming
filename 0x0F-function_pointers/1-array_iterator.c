#include "function_pointers.h"

/**
 *array_iterator - executes a func given as a parameter on element of array
 *@array: array to execute function 
 *@size: array size. 
 *@action: pointer to the function to use
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while  (size--)
			action(*(++array));
}
