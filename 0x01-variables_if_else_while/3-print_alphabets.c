#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: print without using printf or puts
 * 
 * Return: Always 0 (success)
*/
int main(void)
{
    char ch ='a'; 
    char sh = 'A';

    while (ch <= 'z')
    {
        putchar(ch);
        ch ++;
    }
    while (sh <= 'Z')
    {
        putchar(sh);
        sh ++;
    }
    putchar('\n');
    return (0);
}
