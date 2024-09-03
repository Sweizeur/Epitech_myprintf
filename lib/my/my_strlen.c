/*
** EPITECH PROJECT, 2023
** day04
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
