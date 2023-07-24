#include "main.h"
/**
* print_octal - Print octal
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print octal
* Return: the int
*/
int print_octal(va_list vlist, char *output_p, int o_p)
{
unsigned int decimal, result;
int x, i = 0;
char octal[100];

decimal = va_arg(vlist, unsigned int);
if (decimal == 0)
	octal[i++] = 48;
while (decimal)
{
	result = decimal % 8;
	if (result < 8)
		octal[i++] = 48 + result;
	decimal = decimal / 8;
}
for (x = i; x > 0; x--, o_p++)
	output_p[o_p] = octal[x - 1];
return (o_p);
}
