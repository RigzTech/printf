/**
* s_trlen - String lenght
* @str: Input
*
* Description: Lenght of the string
*
* Return: The lenght
*/
int s_trlen(char *str)
{
int y = 0;

while (str[y] != '\0')
y++;
return (y);
}
