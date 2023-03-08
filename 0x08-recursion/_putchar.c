#include <unistd.h>
/**
* _putchar 
* write a character C to the standard output
* @c: the character to be printed
*
* Return: On success 1
* On error, -1 and error is set approprietlt
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
