#include "main.h"
/**
 * print_rot13 - Print rot13
 * @vlist: arguments passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Description: Fuction that print rot13
 * Return: the int
 */
int print_rot13(va_list vlist, char *output_p, int o_p)
{
	int i = 0, j;
	char *pt = va_arg(vlist, char *);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!pt)
		pt = "(ahyy)";
	while (pt[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (pt[i] == alpha[i])
			{
				output_p[o_p] = rot13[j];
				o_p++;
				break;
			}
			if (pt[i] < 65 || (pt[i] > 90 && pt[i] < 97) || pt[i] > 122)
			{
				output_p[o_p] = pt[i];
				o_p++;
				break;
			}
			j++;
		}
		i++;
	}
	return (o_p);
}
