/*
** EPITECH PROJECT, 2023
** flag
** File description:
** a
*/

#include <stdarg.h>
#include "include/my.h"

int flag_a(const char *format, va_list list, int *i)
{
    return my_double_to_hex(va_arg(list, double), 0, -1);
}
