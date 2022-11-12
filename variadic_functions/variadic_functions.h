#ifndef VARIADICT_FUNCTIONS
#define VARIADICT_FUNCTIONS
#include <stdio.h>
#include <stdarg.h>
#include "type_functions.h"

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
