/*
** EPITECH PROJECT, 2023
** flag
** File description:
** A
*/

#include <stdarg.h>
#include "include/my.h"

int flag_alphaa(const char *format, va_list list, int *i)
{
    return my_double_to_hex(va_arg(list, double), 1, -1);
}
