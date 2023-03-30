#ifndef VARIADICT_FUNCTIONS
#define VARIADICT_FUNCTIONS
#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
char *op;
void (*f)(va_list, char *);
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
