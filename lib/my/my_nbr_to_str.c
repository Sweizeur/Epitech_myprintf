/*
** EPITECH PROJECT, 2023
** MY_ISNEG
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdlib.h>
#include "include/my.h"

char *my_nbr_to_str(int n)
{
    char *str = malloc(sizeof(char) * 12);
    char tmp[12];
    char *sub_str;
    int i = 0;
    int sub_len = 0;

    if (n < 0) {
        str[i++] = '-';
        n = -n;
    }
    if (n >= 10) {
        sub_str = my_nbr_to_str(n / 10);
        sub_len = my_strlen(sub_str);
        my_strncpy(str + i, sub_str, sub_len);
        i += sub_len;
        free(sub_str);
    }
    str[i] = '0' + (n % 10);
    str[i + 1] = '\0';
    return (str);
}
