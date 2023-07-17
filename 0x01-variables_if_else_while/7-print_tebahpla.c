#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters except a and e
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
