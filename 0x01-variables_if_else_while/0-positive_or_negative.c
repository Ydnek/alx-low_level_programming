#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 *main - Entery point
 *
 * Description: Prints whether a random number is positive or negative
 * 
 * Return: Always 0
 */
 int main(void)
 {
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    return (0);
    if (!n)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        (n>0) ? printf("%d is positive\n", n) : printf("%d is negative\n", n);
    }  
 }

