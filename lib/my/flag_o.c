/*
** EPITECH PROJECT, 2023
** flag
** File description:
** o
*/

#include <stdarg.h>
#include "include/my.h"

int flag_o(const char *format, va_list list, int *i)
{
    return (my_putnbr_base(va_arg(list, int), 8, 0));
}
