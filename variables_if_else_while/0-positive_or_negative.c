#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Description: ssign value to the variable n, and determine based on it, if it is a negative or positive number or equal to its value
 *
 * main - printf : output with newline
 *
 */

int main (void) {
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
	{
		printf("%d is zero\n",n);
	}
	if(n>0)
	{
		printf("%d is positive\n",n);
	}
	if(n<0)
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
