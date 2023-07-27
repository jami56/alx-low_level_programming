#include "main.h"
/**
*_strncpy: a function that copies a string.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 * @n: the maximum number of characters to copy.
 * Return: A pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
