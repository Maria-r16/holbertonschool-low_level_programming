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

	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	
	return 0;

}
