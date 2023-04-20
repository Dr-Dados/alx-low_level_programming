#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@separator : string to be printed between strings
 *@n : number of strings passed to function
 *@...: arguments of strings
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */


void print_strings(const char *separator,
const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
char *str;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
