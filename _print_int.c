#include "main.h"

/**
 * print_int - prints an integer
 * @n: integer to be printed
 * Return: number of int printed
 */

int print_int(int n)
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
		co_num += print_int(num / 10);

	_putchar((num % 10) + '0');
	co_num++;

	return (co_num);
}
