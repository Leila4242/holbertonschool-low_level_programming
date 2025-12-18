#include "main.h"

/**
 * factorial(int n); - returns the factorial of the given number
 * @n: given number
 *
 * Return: factorial of the number 
 */
int factorial(int n)
{
    if(n > 0)
    {
        return(n*factorial(n-1));
    }
    else if(n==0) {
        return(0);
    }
    else{
        return(-1);
    }
}
