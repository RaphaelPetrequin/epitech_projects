/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** reproduce printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include "includes/my.h"

int find_flag(const char format, va_list list, char subflag, int spaces_o_zero)
{
    char *flag = malloc(sizeof(char) * 14 + 1);
    int (*tab[15])(va_list, char, int) = {&printfm, &printfc,
    &printfs, &printfdi, &printfdi, &printfu, &printfo,
    &printfx, &printfxmaj, &printff, &printffmaj, &printfp,
    &printfe, &printfemaj};
    int j;

    flag = "%csdiuoxXfFpeEg";
    for (j = 0; format != flag[j] && flag[j] != '\0'; j++) {
    }
    if (format == flag[j])
        return (tab[j](list, subflag, spaces_o_zero));
    my_putchar('%');
    my_putchar(format);
    return (2);
}

int howmanyzero(const char *format, va_list list, int *i)
{
    int *ptri = i;
    char buff[100];
    int nbzero = 0;
    int len = 0;
    int j = 2;

    for (j; format[*i + j] >= '0' && format[*i + j] <= '9'; j++) {
        buff[j - 2] = format[*i + j];
        len++;
    }
    buff[len] = '\0';
    for (int k = 0; buff[k] != '\0'; k++) {
        nbzero += ((buff[k] - 48)) * my_power(10, (len - k - 1));
    }
    *ptri = *ptri + len;
    return (len + find_flag(format[j], list, '0', nbzero));
}

int find_subflag(const char *format, va_list list, int *i)
{
    int *ptri = i;
    int count = 0;

    if (format[*i + 1] == '#' || format[*i + 1] == '+') {
        count = count + find_flag(format[*i + 2], list, format[*i + 1], 0);
        *ptri = *ptri + 2;
    } else if (format[*i + 1] == '0') {
        count = count + (howmanyzero(format, list, i));
        *ptri = *ptri + 1;
    } else {
        count = count + (find_flag(format[*i + 1], list, ' ', 0));
    }
    return (count);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int count = 0;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            count = count + find_subflag(format, list, &i);
            i++;
        } else {
            my_putchar(format[i]);
            count++;
        }
    }
    free;
    va_end(list);
    return (count);
}
