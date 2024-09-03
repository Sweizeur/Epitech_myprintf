/*
** EPITECH PROJECT, 2023
** flag
** File description:
** o
*/

#include <stdarg.h>
#include "include/my.h"

int flag_e(const char *format, va_list list, int *i)
{
    return my_double_to_scient(va_arg(list, double), 0, 6);
}
