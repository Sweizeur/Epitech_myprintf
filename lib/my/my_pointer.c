/*
** EPITECH PROJECT, 2023
** printf
** File description:
** pointer
*/

#include <stdio.h>
#include "include/my.h"

int my_pointer(void *pointer)
{
    my_putstr("0x");
    return (2 + my_putnbr_base((unsigned int)pointer, 16, 0));
}
