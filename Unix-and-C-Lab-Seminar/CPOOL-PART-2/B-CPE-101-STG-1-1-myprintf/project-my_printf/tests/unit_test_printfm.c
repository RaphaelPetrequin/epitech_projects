/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFM
** File description:
** Tests the fcts printfm
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfm(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, str_modulo_in_string, .init=redirect_all_stdprintfm)
{
    char str[] = "Epitech";

    my_printf("The word %%Epitech%% has 7 characters.\n", str);
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters.\n");
}
