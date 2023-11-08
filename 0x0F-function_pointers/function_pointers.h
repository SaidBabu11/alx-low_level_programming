#ifndef FUNCTION_HEADERS_H
#define FUNCTION_HEADERS_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /*FUNCTION_HEADERS_H*/
