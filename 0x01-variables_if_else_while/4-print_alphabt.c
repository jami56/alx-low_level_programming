#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters except a and e
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}

