#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_

#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif/* FUNCTION_POINTERS_H*/
