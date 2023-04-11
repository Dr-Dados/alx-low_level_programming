#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string or NULL if fails
 */

char *_strdup(char *str)
{
  char *dup;
  unsigned int i;

  if (str == NULL)
    {
      return (NULL);
    }
  i = strlen(str);
  dup = malloc(sizeof(char) * (i + 1));

  if(dup == NULL)
    {
      return (NULL);
    }
  strcpy(dup,str);
  return (dup);
}
