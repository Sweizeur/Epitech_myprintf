/*
** EPITECH PROJECT, 2023
** putchar
** File description:
** putchar
*/

#include <unistd.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}
