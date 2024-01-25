/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFS
** File description:
** Tests the fcts printfs
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfs(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, str_in_string, .init=redirect_all_stdprintfs)
{
    char str[] = "world";

    my_printf("Hello %s\n", str);
    cr_assert_stdout_eq_str("Hello world\n");
}
