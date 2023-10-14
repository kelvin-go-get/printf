#ifndef MAIN_H
#define MAIN_H

/* Standard header files */
#include <stdio.h>
#include <stdlib.h>

int _pr_int(va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);

#endif

