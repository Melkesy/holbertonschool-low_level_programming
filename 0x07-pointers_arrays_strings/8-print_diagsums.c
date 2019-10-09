#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
	}

	printf("%d, \n", sum1);
}
