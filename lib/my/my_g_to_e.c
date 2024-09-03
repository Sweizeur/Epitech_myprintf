/*
** EPITECH PROJECT, 2023
** double
** File description:
** scientifique
*/

#include <stdlib.h>
#include "include/my.h"

static char *rond(char *str, int j)
{
    if (str[j + 1] >= '5') {
        if (str[j] == '0' + 9)
            rond(str, j - 1);
        if (str[j] == '0' + 9)
            str[j] = 47;
        str[j] += 1;
    }
    return (str);
}

static char *verif(char *str)
{
    while (str[my_strlen(str) - 1] == '0') {
        str[my_strlen(str) - 1] = '\0';
    }
    if (my_strlen(str) == 0)
        str[0] = '0';
    return (str);
}

static int point(char *str, int precision)
{
    int i = 0;
    int j = 0;
    int n;

    if (str[i] == '-') {
        my_putchar(str[i++]);
        str = &str[1];
    }
    str[my_strlen(str) - 1] = '\0';
    str = verif(str);
    my_putchar(str[i++]);
    if (my_strlen(str) > 1) {
        my_putchar('.');
        n = -1;
    }
    for (j = 0 + i; j < precision && str[j] != '\0'; j += 1)
        my_putchar(str[j]);
    return ((n < 0) ? (1) : (0));
}

void neg_majg(int *maj, int *zero)
{
    if (*maj == 1) {
        my_putchar('E');
    } else {
        my_putchar('e');
    }
    if (*zero != 0) {
        my_putchar('-');
    } else {
        my_putchar('+');
    }
}

int my_doubleg(int *maj, int *vir, int *zero)
{
    int n = 0;

    neg_majg(&*maj, &*zero);
    if (*vir <= 9) {
        my_putchar('0');
        n += 1;
    }
    return (my_put_nbr(*vir) + n);
}

int more2(double *nb, int *maj, int *i)
{
    if (*nb == 0) {
        my_putstr("0.000000");
        if (*maj == 1) {
            my_putchar('E');
        } else {
            my_putchar('e');
        }
        my_putstr("+00");
        return (12);
    }
    while (*nb >= 10 || *nb <= -10) {
        *nb = *nb / 10;
        *i = *i + 1;
    }
    return (0);
}

int my_g_to_e(double nb, int maj, int precision)
{
    char test[10] = "";
    char *str = "";
    int i = 0;
    int zero = 0;

    if (more2(&nb, &maj, &i) == 12)
        return (12);
    for (int j = 0; nb - (int) nb == nb; nb *= 10) {
        test[0] = '0';
        i++;
        zero++;
    }
    for (int i2 = 0; i2 < precision + 1; i2++)
        nb *= 10;
    str = my_nbr_to_str((int)(float)nb);
    str = rond(str, precision);
    str[my_strlen(str) - 1] = '\0';
    precision = point(str, precision);
    zero = my_doubleg(&maj, &i, &zero);
    return (my_strlen(str) + 2 + precision + zero);
}
