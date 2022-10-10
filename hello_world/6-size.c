#include <stdio.h>

/**
 * main - prints the size various types 
 *
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long longlongType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	
	return 0;

}
