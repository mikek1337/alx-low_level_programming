#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
/*
 * something to make the compiler happy
 */
typedef int make_iso_compilers_happy;
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
