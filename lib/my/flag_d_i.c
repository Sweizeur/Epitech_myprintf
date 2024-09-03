/*
** EPITECH PROJECT, 2023
** flag
** File description:
** d_i
*/

#include <stdarg.h>
#include "include/my.h"

int flag_d_i(const char *format, va_list list, int *i)
{
    return (my_put_nbr(va_arg(list, int)));
}
