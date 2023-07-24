#include "main.h"
/**
 * print_unumber - prints a unsigned num
 * @vlist: arguments passed to print
 * @output_p: host output
 * @o_p: output position
 *
 * Description: Function that print a char
 * Return: int
 */
int print_unumber(va_list vlist, char *output_p, int o_p)
{
	long int a = 1, b = 0, c, n = 0, m = 0, aux = 4294967296;

	m = va_arg(vlist, int);
	if (m < 0)
		n = aux + m;
	else
		n = m;
	while (n / a > 9)
	{
		a = a * 10;
		b++;
	}
	for (c = 0; c <= b; c++, o_p++)
	{
		output_p[o_p] = ((n / a) + '0');
		n = n % a;
		a = a / 10;
	}
	return (o_p);
}
