#include "main.h"

/**
 * handle_specifier - handles conversion specifiers
 * @format: format string
 * @args: arguments
 * Return: number of characters printed
 */

/*int handle_specifier(const char *format, va_list args)
{
    int i, j, count = 0;
    print_data print[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {NULL, NULL}
    };

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            for (j = 0; print[j].type != NULL; j++)
            {
                if (format[i + 1] == print[j].type[0])
                {
                    count += print[j].f(args);
                    break;
                }
            }
            if (print[j].type == NULL && format[i + 1] != ' ')
            {
                _putchar(format[i]);
                _putchar(format[i + 1]);
                count += 2;
            }
            i++;
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }
    return (count);
} */