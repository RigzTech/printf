#include "main.h"
/**
* print_paddress - Print address
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print the address
* Return: the int
*/
int print_paddress(va_list vlist, char *output_p, int o_p)
{
	void *addr;
	unsigned long int decimal, result, i, j = 0;
	char hexa[100];
	char *s = "(nil)";

	addr = va_arg(vlist, void *);
	decimal = (unsigned long int)addr;
	if (decimal == 0)
	{
		for (j = 0; s[j]; j++, o_p++)
			output_p[o_p] = s[j];
		return (o_p);

	}
	while (decimal)
	{
		result = decimal % 16;
		if (result < 10)
			hexa[j++] = 48 + result;
		else
			hexa[j++] = 87 + result;
		decimal = decimal / 16;
	}
	output_p[o_p] = 48;
	o_p++;
	output_p[o_p] = 120;
	o_p++;
	for (i = j; i > 0; i--, o_p++)
		output_p[o_p] = hexa[i - 1];
	return (o_p);
}
