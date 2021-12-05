#include "search_algos.h"

/**
* print_array - Print array
* @array: Array to print
* @size: Size of array
* @i: position to print from
*/
void print_array(int *array, size_t i, size_t size)
{
if (i > size)
return;
printf("%d", array[i]);
if (i < size)
printf(", ");
print_array(array, i + 1, size);
}

/**
* advanced_binary -  Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size:  Array size
* @value: Value to search for
* Return: Index where value is located
*/

int advanced_binary(int *array, size_t size, int value)
{size_t min = 0, max = size - 1, a;
if (!array)
return (-1);
while (min <= (max))
{printf("Searching in array: ");
print_array(array, min, max);
printf("\n");
a = (min + max) / 2;
if (array[a] == value && array[a - 1] != value)
return (a);
else if (array[a] < value)
min = a + 1;
else
max = a; }
return (-1); }
