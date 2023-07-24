#include "main.h"
#include <stdarg.h>


/**
 * format_handler - handle the format specifier for _printf
 * @specif : format specifier
 * @args : list of arguments
 * Return: Number of printed characters
 */

int format_handler(char specif, va_list args)
{
    int printed_chars = 0;

    if (specif == '%')
        printed_chars += _putchar('%');
    else if (specif == 'c')
        printed_chars += _putchar(va_arg(args, int));
    else if (specif == 's')
        printed_chars += print_string(args);
     else
     {
        printed_chars += _putchar('%');
        printed_chars += _putchar(specif);
     }
     return (printed_chars);
}