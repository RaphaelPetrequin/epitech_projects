/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFP
** File description:
** Tests the fct printfp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfp(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, pointer_in_string, .init=redirect_all_stdprintfp)
{
    char buff[50];
    int a = 10;

    sprintf(buff, "%p", &a);
    my_printf("%p", &a);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, pointernull_in_string, .init=redirect_all_stdprintfp)
{
    char buff[50];
    int *a = 0;

    sprintf(buff, "%p", a);
    my_printf("%p", a);
    cr_assert_stdout_eq_str(buff);
}
