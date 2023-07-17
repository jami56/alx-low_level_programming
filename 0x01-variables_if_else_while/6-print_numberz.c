#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters except a and e
 * Return: Always 0 (success)
*/
int main(void)
{
int ch = 0;
while (ch < 10)
{
putchar(ch + '0');
ch++;
}
putchar('\n');
return (0);
}
