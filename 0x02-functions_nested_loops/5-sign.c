#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: void
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else if (n < 0) 
{
putchar('-');
return (-1);
}
putchar('\n');
}
