#include "main.h"
/**
 * print_numbers - print 0 - 9
 *    only using _putchar twice
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
int sh = 0;
do {
_putchar(sh + 48);
sh++;
}
while (sh >= 0 && sh <= 9)
_putchar('\n');
}
