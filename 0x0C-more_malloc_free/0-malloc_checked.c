#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: returns a void pointer to our new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_new;

	mem_new = malloc(b);
	if (!mem_new)
		exit(98);
	return (mem_new);
}
