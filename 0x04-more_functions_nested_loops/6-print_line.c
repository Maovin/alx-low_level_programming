#include "main.h"

/**
 * print_line - it prints straight line
 * @n: the number of times
 * Return: Always zero
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
