#include "main.h"
/**
 *_puts - a function that prints a string, followed by a new line, to stdout.
 *@str:string.
 *Return: Always 0.
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str + 0);
str++;
}
putchar('\n');
}
