#include "main.h"
/**
 * _memcpy - copies 'n' bytes of data from source buffer to destination buffer
 * @dest: pointer to the destination buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
