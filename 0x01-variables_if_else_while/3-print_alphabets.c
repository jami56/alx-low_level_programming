#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
char ch = 'a', sh = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (sh <= 'Z')
{
putchar(sh);
sh++;
}
putchar('\n');
return (0);
}
