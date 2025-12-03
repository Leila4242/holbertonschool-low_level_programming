#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
	    if(c!=9){
	        putchar(c + '0');
		    putchar(',');
		    putchar(' ');
		    c++;  
	    }
	    else{
	        putchar(c + '0');
		    c++;
	    }
	}

	return (0);
}