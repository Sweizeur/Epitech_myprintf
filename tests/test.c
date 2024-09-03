/*
** EPITECH PROJECT, 2023
** unit
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(mini_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(mini_print, string, .init = redirect_all_std)
{
    char *str = "world";
        my_printf("hello %s", str);
        cr_assert_stdout_eq_str("hello world");
}

Test(mini_prinf, decandint, .init = redirect_all_std)
{
    my_printf("hello%d world%i", 1, -2456);
    cr_assert_stdout_eq_str("hello1 world-2456");
}

Test(mini_pritf, charpercent, .init = redirect_all_std)
{
    my_printf("h%cllo %%world%%", 'e');
    cr_assert_stdout_eq_str("hello %world%");
}

Test(mini_prntf, all, .init = redirect_all_std)
{
    my_printf("%s %%%c%dr%id%%", "hello", 'w', 0, 1);
    cr_assert_stdout_eq_str("hello %w0r1d%");
}

Test(mini_pintf, backslash_n, .init = redirect_all_std)
{
    my_printf("\n");
    cr_assert_stdout_eq_str("\n");
}

Test(mini_rintf, justpercent, .init = redirect_all_std)
{
    my_printf("%%%s%c%d%h%%", "hell", 'o', 0);
    cr_assert_stdout_eq_str("%hello0");
}

Test(miniprintf, smple_string, .init = redirect_all_std)
{
    my_printf("%%%%%%%%");
    cr_assert_stdout_eq_str("%%%%");
}

Test(miniprinf, simple_sting, .init = redirect_all_std)
{
    my_printf("");
    cr_assert_stdout_eq_str("");
}
