include "main.h"
/**
 * sqart - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 on success , -1 on fail
 */
int sqart(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqart(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number
 * Return: 1 on success , -1 on fail
 */
int _sqrt_recursion(int n)
{
	return (sqart(n, 1));
}
