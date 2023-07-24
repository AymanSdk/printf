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
int format_handler(char specif, va_list args);


/* print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* function to get the correct function to print */



/* helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif




