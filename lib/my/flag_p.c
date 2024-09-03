/*
** EPITECH PROJECT, 2023
** flag
** File description:
** x
*/

#include <stdarg.h>
#include "include/my.h"

int flag_p(const char *format, va_list list, int *i)
{
    return my_pointer(va_arg(list, void *));
}
