/*
** EPITECH PROJECT, 2023
** UNIT_TEST_MYPRINTF
** File description:
** Tests the fct my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintf(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, unknow_flag_in_string, .init=redirect_all_stdprintf)
{
    my_printf("%k");
    cr_assert_stdout_eq_str("%k");
}

Test(my_printf, simple_string, .init=redirect_all_stdprintf)
{
    char str[6] = "world";

    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}