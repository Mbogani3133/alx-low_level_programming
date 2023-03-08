#include  "main.h"

/**
* factorial - Returning the factorial of a given number.
* @n: number input
*Return: Factorial of the number.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
