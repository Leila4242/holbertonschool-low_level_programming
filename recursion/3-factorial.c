#include "main.h"

/**
 * factorial(int n); - returns the factorial of the given number
 * @n: given number
 *
 * Return: factorial of the number 
 */
int factorial(int n){
    int s = 1;
    int i = 0;
    while(i < n){
        i = i+1;
        s = s*i;
    }
    return(s);
}
