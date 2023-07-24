#include "main.h"

/**
 * print_char - prints a character
 * @args: character to print
 * Return: number of characters printed
 */

int print_char(va_list args)
{
char c;
c = va_arg(args, int);
_putchar(c);
return (1);
}
