/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFC
** File description:
** Tests the fcts printfc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfc(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, char_in_string, .init=redirect_all_stdprintfc)
{
    char c = 'A';

    my_printf("J'ai eu grade %c", c);
    cr_assert_stdout_eq_str("J'ai eu grade A");
}
