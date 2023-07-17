#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters except a and e
 * Return: Always 0 (success)
*/
int main(void)
{
int sh = '0';
while (sh <= '9')
{
putchar(sh);
if (sh != '9')
{
putchar(',');
putchar(' ');
}
sh++;
}
putchar('\n');
return (0);
}
