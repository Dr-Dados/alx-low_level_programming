#include "3-calc.h"
#include <stdlib.h>

/**
 *get_oe_func - chooses the function to execute the operation
 *asked by the user
 *@s: the operator passed by the user
 *
 *Return: pointer to the function chosen by the operator
 */

int (*get_op_func(char *s))(int, int)
{
op_t operation[]={
{"+", op_add},
{"-", op_sub},
{"*", op_mult},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int i = 0;
while (operation[i].op != NULL && *(operation[i].op) != *s)
i++;
return (operation[i].f);
}
