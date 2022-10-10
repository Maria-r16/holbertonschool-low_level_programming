#include <studio.h>

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
	char charType,

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long: %zu bytes\n", sizeof(longlongType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	
	return 0;

}
