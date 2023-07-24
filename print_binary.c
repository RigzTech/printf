#include "main.h"
char *p_binary(int n);
/**
 * print_binary - Print binary
 * @vlist: argument passed to print
 * @output_p: Host output
 * @o_p: Output position
 *
 * Description: print number
 * Return: 0
 */
int print_binary(va_list vlist, char *output_p, int o_p)
{
	int x, z = 0;
	char *ptr;

	x = va_arg(vlist, int);
	ptr = p_binary(x);

	for (; ptr[z]; y++, o_p++)
		output_p[o_p] = ptr[z];
	return (o_p);
}
/**
 * p_binary - Print %
 * @n: number for convert
 *
 * Description: return a binary
 * Return: 0
 */
char *p_binary(int n)
{
	int a, b, count, flag = 0;
	char *point, *zero = "0";

	count = 0;
	if (n == 0)
		return (zero);
	point = (char *)malloc(33);
	if (!point)
		exit(EXIT_FAILURE);
	for (a = 31; a >= 0; a--)
	{
		b = n >> a;
		if (b & 1)
			*(point + count) = 1 + '0';
		else
			*(point + count) = 0 + '0';
		count++;
	}
	*(point + count) = '\0';
	while (point)
	{
		{
			if (*point != '0')
				flag = 1;
			if (flag == 1)
				return (point);
			point++;
		}
	}
	free(point);
	return (point);
}
