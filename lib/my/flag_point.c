/*
** EPITECH PROJECT, 2023
** flag
** File description:
** d_i
*/

#include <stdarg.h>
#include "include/my.h"

int flag_point(const char *format, va_list list, int *i)
{
    return (my_precision(format, va_arg(list, double), &*i));
}
