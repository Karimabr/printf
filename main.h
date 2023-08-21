#ifndef MAIN_H
#define MAIN_H

//main.h file//
//included libraries//
 
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

//prototypes included//

int _printf(const char *format, ...);
int _putchar(va_list args);
int print_str(va_list args);
int print_int(va_list args);

#endif
