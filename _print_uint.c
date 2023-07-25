#include "main.h"

/**
 * print_uint - prints an unsigned integer
 * @n:unsigned integer to be printed
 * Return: number of int printed
 */

int print_uint(unsigned int n)
{
	int co_num = 0;

	if (n / 10)
		co_num += print_uint(n / 10);
	_putchar(n % 10 + '0');
	co_num++;

	return (co_num);
}
