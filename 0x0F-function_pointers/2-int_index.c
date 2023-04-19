#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - return the index of the searched int
 *@array : array of int numbers to search in
 *@size : size of the array
 *@cmp : the function to use
 *
 *Return : the index of the searched int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
