#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>



/* main print function */
int _printf(const char *format, ...);

/* struct to get the correct function to print */
/*typedef struct print
{
    char *type;
    int (*f)(va_list args);
} print_data; */


/* format handler */
 int handler(const char *format, va_list args);


/* print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* function to get the correct function to print */
int (*get_print_func(const char *s))(va_list args);

/* helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif




