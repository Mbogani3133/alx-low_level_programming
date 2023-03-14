#include <stdio.h>
#include "main.h"

/**
* _putchar - Write the character c to stdout
* @c: The character to print
* Return: 1 on success
* on error -1 is returned and error is set approprietly
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
