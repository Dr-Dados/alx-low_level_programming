#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - return the sum of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - return the substraction of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: sub of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - return the multiplication of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - return the devision of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: devision of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 *op_mod - return the modulo of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: modulo of a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}
