#include "main.h"

/**
 * print_percent - prints a percent symbol
 * @args: percent symbol to print
 * Return: number of characters printed
 */

int print_percent(va_list args)
{
    char c;

    c = va_arg(args, int);
    _putchar(c);
    return (1);
}