/*
** EPITECH PROJECT, 2023
** day09
** File description:
** task02
*/

#ifndef PROTO
    #define PROTO
    #include <stdarg.h>
    #define UP(str, maj) (maj == 1) ? (my_strupcase(my_strdup(str))) : (str)

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_printf(const char *format, ...);
int flag_d_i(const char *format, va_list list, int *i);
int flag_s(const char *format, va_list list, int *i);
int flag_c(const char *format, va_list list, int *i);
int flag_percent(const char *format, va_list list, int *i);
int flag_o(const char *format, va_list list, int *i);
int flag_u(const char *format, va_list list, int *i);
int flag_x(const char *format, va_list list, int *i);
int flag_alphax(const char *format, va_list list, int *i);
int flag_e(const char *format, va_list list, int *i);
int flag_alphae(const char *format, va_list list, int *i);
int flag_f(const char *format, va_list list, int *i);
int flag_alphaf(const char *format, va_list list, int *i);
int flag_p(const char *format, va_list list, int *i);
int flag_point(const char *format, va_list list, int *i);
int flag_a(const char *format, va_list list, int *i);
int flag_alphaa(const char *format, va_list list, int *i);
int flag_g(const char *format, va_list list, int *i);
int mod_h(const char *format, va_list list, int *i);
int mod_hh(const char *format, int nb2, int *i);
int mod_l(const char *format, va_list list, int *i);
int mod_ll(const char *format, unsigned long long nb2, int *i);
int mod_alphal(const char *format, va_list list, int *i);
int my_strlen(char const *str);
char *my_revstr(char *str);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
int my_putnbr_base(unsigned long long nbr, int base, int maj);
char *my_strupcase(char *str);
char *my_nbr_to_str(int n);
char *my_strncpy(char *dest, char const *src, int n);
int my_intlen(int n);
int my_double_to_scient(double nb, int maj, int precision);
int my_double_f(double nb, int maj, int precision);
int my_pointer(void *pointeur);
int my_precision(const char *format, double nb, int *i);
int my_compute_power_rec(int nb, int p);
int my_double_to_hex(double nb, int maj, int precision);
int my_f_or_e(double nb, int maj, int precision);
int my_g_to_e(double nb, int maj, int precision);

#endif /* PROTO */
