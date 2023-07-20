#include "main.h"
/**
 * print_numbers - print 0 - 9
 *    only using _putchar twice
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
int ch = '0';
while (ch <= '9')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
