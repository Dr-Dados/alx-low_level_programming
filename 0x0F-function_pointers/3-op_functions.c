#include <stdio.h>
#include "3-calc.h"

int opp_add(int a, int b);
int opp_sub(int a, int b);
int opp_mult(int a, int b);
int opp_div(int a, int b);
int opp_mod(int a, int b);

/**
 *opp_add - return the sum of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: sum of a and b
 */

int opp_add(int a, int b)
{
return (a + b);
}

/**
 *opp_sub - return the substraction of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: sub of a and b
 */
int opp_sub(int a, int b)
{
return (a - b);
}

/**
 *opp_mult - return the multiplication of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: multiplication of a and b
 */
int opp_mult(int a, int b)
{
return (a * b);
}

/**
 *opp_div - return the devision of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: devision of a and b
 */
int opp_div(int a, int b)
{
return (a / b);
}

/**
 *opp_mod - return the modulo of two numbers
 *@a :first number
 *@b :scond number
 *
 *Return: modulo of a and b
 */
int opp_mod(int a, int b)
{
return (a % b);
}
