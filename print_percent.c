#include "main.h"
/**
* print_percent - Print %
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print %
* Return: the int
*/
int print_percent(va_list vlist, char *output_p, int o_p)
{
(void) vlist;
output_p[o_p] = '%';
return (++o_p);
}
