#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add- adds two numbers
 * Description: adds two numbers
 * Return: sum of two numbers
 * @a: first number
 * @b: second number
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtracts two numbers
 * Description: subtracts two numbers
 * Return: difference of two numbers
 * @a: first number
 * @b: second number
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies two numbers
 * Description: multiplies two numbers
 * Return: product of two numbers
 * @a: first number
 * @b: second number
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides two numbers
 * Description: divides two numbers
 * Return: dividend of two numbers
 * @a: first number
 * @b: second number
 **/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- modulus of two numbers
 * Description: finds modulus of two numbers
 * Return: mod of two numbers
 * @a: first number
 * @b: second number
 **/

int op_mod(int a, int b)
{
	return (a % b);
}
