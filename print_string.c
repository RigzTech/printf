#include "holberton.h"
/**
* print_string - Print string
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print a string
* Return: the int
*/
int print_string(va_list vlist, char *output_p, int o_p)
{
int y = 0;
char *ptr = va_arg(vlist, char *);

if (!ptr)
ptr = "(null)";
for (; ptr[y]; y++, o_p++)
output_p[o_p] = ptr[y];
return (o_p);
}
