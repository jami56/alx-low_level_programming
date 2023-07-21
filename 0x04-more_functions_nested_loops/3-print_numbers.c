#include "main.h"
/**
 * print_numbers - print 0 - 9
 *    only using _putchar twice
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int sh = 0;
while (sh <= 9)
{
_putchar(sh + '0');
sh++;
}
_putchar('\n');
}
