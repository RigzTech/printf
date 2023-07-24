#include "main.h"
int print_HEXA_S(char s, char *output_p, int o_p);
/**
 * print_S_string - prints a string with specifier S
 * @vlist: arguemtns passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Return: int
 */
int print_S_string(va_list vlist, char *output_p, int o_p)
{
	int x = 0;
	char *ptr = va_arg(vlist, char*);

		if (!ptr)
			ptr = NULL;
	while (ptr[x])
	{
		if ((ptr[x] > 0 && ptr[x] < 32) || ptr[x] >= 127)
		{
			o_p = print_HEXA_S(ptr[x], output_p, o_p), x++;
		}
		else
			output_p[o_p] = ptr[x], o_p++, x++;
	}
	return (o_p);
}
/**
 * print_HEXA_S - prints the string
 *
 * @s: char that prints HEXA
 * @output_p: Host output
 * @o_p: output position
 *
 * Description: function that prints some chars with hexa
 * Return: 0
 */
int print_HEXA_S(char s, char *output_p, int o_p)
{
	int result;
	int x, y = 0;
	char hexa[2] = { 0, 0};

	output_p[o_p] = 92;
	o_p++;
	output_p[o_p] = 120;
	o_p++;

	if (s == 0)
		hexa[y++] = 48;
	while (y < 2)
	{
		result = s % 16;
		if (result < 10)
			hexa[y++] = 48 + result;
		else
			hexa[y++] = 55 + result;
		s = s / 16;
	}
	for (x = y; x > 0; x--, o_p++)
		output_p[o_p] = hexa[x - 1];
	return (o_p);
}
