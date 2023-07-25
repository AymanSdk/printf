#include "main.h"

/**
 * print_uint - prints an unsigned integer
 * @n:unsigned integer to be printed
 * Return: number of int printed
 */

int print_uint(unsigned int n)
{
	int co_num = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		co_num++;
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		co_num += print_uint(num / 10);
	_putchar((num % 10) + '0');
	co_num++;
	return (co_num);
}
