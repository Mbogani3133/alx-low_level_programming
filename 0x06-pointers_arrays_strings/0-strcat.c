#include "main.h"

/*
* _strcat - function that concatenates two strings.
* @dest: an input string
* @src: an input string
* Return: A pointer to the result string
*/
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}



