#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - uses the function passed to print the array
 *@array : array to print
 *@size : size of the array
 *@action : function to use
 *
 *Return : always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0 ; i < size ; i++)
action(array[i]);
}
