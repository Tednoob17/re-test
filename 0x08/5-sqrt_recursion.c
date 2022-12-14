#include "holberton.h"
#include <stdio.h>

/**
 *_sqrt_recursion - print a square of number n
 *@n: number
 *Return: square of number n
 */
int _sqrt_recursion(int n)
{
	return (verif(n, 2));
}


/**
 *verif - check is the two nubers i compatible square and root
 *@n: number
 *@i: number who change if it's not a root
 *Return: 0 or 1 otherwise
 */
int verif(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	else
	{
		if (i * i == n)
			return (i);

		else
		{
			if (i < (n / 2))
				return (verif(n, i + 1));

			else
				return (-1);
		}
	}
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
