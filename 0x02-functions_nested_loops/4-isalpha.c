#include "main.h"
/**
 * _isalpha - checks if a character is lowercase and uppercase
 * @c: the character to check
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
if (c >= 97 && c <= 122)
return (1);
return (0);
}

