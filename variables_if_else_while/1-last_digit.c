#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*Compare and get a result*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int last = n%10;
	if(last<6 && last>0){
        printf("%d and is less than 6 and not 0\n",n);
    }
    else if(last>5){
        printf("%d and is greater than 5\n",n);
    }
    else if(last==0){
        printf("%d and is 0\n",n);
    }
	return (0);
}
