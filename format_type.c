#include "main.h"
/**
 * format_type - type of function
 * @s: input
 *
 * Description: Function to get the type function
 * Return: type or null
 */
int (*format_type(char *s))(va_list vlist, char *output_p, int o_p)
{
	t_f types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_single_int},
		{"d", print_int},
		{"o", print_octal},
		{"u", print_unumber},
		{"x", print_hexa},
		{"X", print_HEXA},
		{"S", print_S_string},
		{"p", print_paddress},
		{"R", print_rot13},
{NULL, NULL}
	};
	int y;

	y = 0;

	while (types[y].character)
	{
		if (types[y].character[0] == s[0] && s[0] != '\0')
			return (types[y].func);
		y++;
	}
	return (NULL);
}
