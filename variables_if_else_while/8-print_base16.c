#include <stdio.h>

/**
 * Program to print all hexadecimal (base 16) digits in lowercase
 */

int main(void)
{
    int i;
    
    i = 0;
    // Print all hexadecimal digits (0-9, a-f)
    while (i < 16)
    {
        if (i < 10)
            putchar(i + '0');
        else
            putchar(i - 10 + 'a');
        i++;
    }
    putchar('\n'); 
    return (0);
}