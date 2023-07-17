#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters except a and e
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
int sh = '0';
while (sh <= '9')
{
putchar(sh);
sh++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
