#include <stdio.h>

/**
 *print_name - prints the string using a function
 *@name : string to print
 *@f : function to use if uppercase or not
 *
 *Return: function to use
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
