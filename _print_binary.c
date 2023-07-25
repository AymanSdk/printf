#include "main.h"

/**
 * print_binary - print binary numbers
 * @n: printed numbers
 * Return: number of digits printed
 */

int print_binary(unsigned int n)
{
	int counter = 0;

	if (n / 2)
		counter += print_binary(n / 2);

	_putchar((n % 2) + '0');
	counter++;

	return (counter);
}

