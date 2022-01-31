#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
/**
 * heap_sort - sift position down.
 * @array: array to be sorted.
 * @size: size of array.
 * @i: start position
 * @fsize: full size.
 */
void sift_down (int *array, int size, int i, int fsize) {
int parent, child, swipe, x;

parent = i;
while (parent * 2 + 1 <= fsize)
{
child = 2 * parent + 1;
swipe = parent;
if (array[swipe] < array[child])
{
swipe = child;
}
if (child + 1 <= fsize && array[swipe] < array[child + 1])
{
swipe = child + 1;
}
if (swipe != parent)
{
x = array[parent];
array[parent] = array[swipe];
array[swipe] = x;
print_array(array, size);
parent = swipe;
}
else
{
break;
}
}
}

/**
 * heap_sort - sort array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of array.
 */
void heap_sort(int *array, size_t size)
{
int i, tmp;
if (size == 0)
return;
for (i = ((int)size - 2) / 2; i >= 0; i--)
{
sift_down(array, (int)size, i, size-1);
}
for (i = (int)size - 1; i > 0; i--)
{
tmp = array[0];
array[0] = array[i];
array[i] = tmp;
print_array(array, (int)size);
sift_down(array, size, 0, i-1);
}
}
