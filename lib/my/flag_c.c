/*
** EPITECH PROJECT, 2023
** flag
** File description:
** c
*/

#include <stdarg.h>
#include "include/my.h"

int flag_c(const char *format, va_list list, int *i)
{
    my_putchar(va_arg(list, int));
    return (1);
}
