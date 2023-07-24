#ifndef _MAIN_H
#define _MAIN_H

#define SIZE 2048

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*format_type(char *s))(va_list vlist, char *output_p, int o_p);
int print_percent(va_list vlist, char *output_p, int o_p);
int print_char(va_list vlist, char *output_p, int o_p);
int s_trlen(char *str);
int print_string(va_list vlist, char *output_p, int o_p);
int print_numbers(int n, char *output_p, int o_p);
int print_int(va_list vlist, char *output_p, int o_p);
int print_single_int(va_list vlist, char *output_p, int o_p);
int print_octal(va_list vlist, char *output_p, int o_p);
int print_unumber(va_list vlist, char *output_p, int o_p);
int print_hexa(va_list vlist, char *output_p, int o_p);
int print_HEXA(va_list vlist, char *output_o, int o_p);
int print_HEXA_S(char s, char *output_p, int o_p);
int print_S_string(va_list vlist, char *output_p, int o_p);
int print_paddress(va_list vlist, char *output_p, int o_p);
int print_rot13(va_list vlist, char *output_p, int o_p);

/**
 * struct t_format - Struct t_format
 *
 * @character: the class
 * @func: pointer to a function
 *
 * Description: the structure for the format type
 */
typedef struct t_format
{
	char *character;
	int (*func)(va_list vlist, char *output_p, int o_p);
} t_f;

#endif
