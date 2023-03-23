#include <stdarg.h>

/**
 * sum_them_all - adds all parameters
 *
 * @n: start of input variables
 *
 * Return: the sum of all Parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	/* initialize the argument*/
	va_start(ap, n);

	/* iterate through parameter values*/
	for (param = 0; param < n; param++)
		/* get the next parameter value and add it to sum*/
		sum += va_arg(ap, int);
	/*Clean*/
	va_end(ap);

	return (sum);
}
