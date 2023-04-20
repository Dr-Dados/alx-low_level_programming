#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints all the number separed by a separator
 *@separator : string to be printed between numbers
 *@n: number of integers passed to function
 *@... : a variable of numbers to print
 *
 *Return: 0 always(success)
 */

void print_numbers(const char *separator,
const unsigned int n, ...) {
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1)
printf(" %c", *separator);
}
printf("\n");
}
