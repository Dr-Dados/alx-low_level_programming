#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 *create_array - creates array of chars
 *and initializes it with spec chars
 *@size: the size of array
 *@c:initial value
 *Return : a pointer to ther array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
 unsigned int;
if (size == 0)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for ( i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
