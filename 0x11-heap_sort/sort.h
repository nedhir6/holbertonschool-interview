#ifndef _HEAP_
#define _HEAP_


#include <stdlib.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void sift_down(int *array, int size, int i, int fsize);

#endif
