#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, itr;

	for (itr = 0; itr < size; itr++)
	{
		sum1 = sum1 + a[itr * size + itr];
	}
	for (itr = size - 1; itr >= 0; itr--)
	{
		sum2 += a[itr * size + (size - itr - 1)];
	}
	printf("%d,%d\n", sum1, sum2);
}
