/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFDI
** File description:
** Tests the fct printfdi
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfdi(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, int_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = 21;

    my_printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.\n");
}

Test(my_printf, intneg_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = -21;

    my_printf("If you cheat, you got a %d.", nb);
    cr_assert_stdout_eq_str("If you cheat, you got a -21.");
}

Test(my_printf, intd_subflag_plus_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%+d", nb);
    my_printf("%+d", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, intd_subflag_plus_neg__in_string, .init=redirect_all_stdprintfdi)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%+d", nb);
    my_printf("%+d", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, intd_subflag_z_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010d", nb);
    my_printf("%010d", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, intd_subflag_z_neg__in_string, .init=redirect_all_stdprintfdi)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010d", nb);
    my_printf("%010d", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, inti_subflag_plus_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%+i", nb);
    my_printf("%+i", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, inti_subflag_plus_neg__in_string, .init=redirect_all_stdprintfdi)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%+i", nb);
    my_printf("%+i", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, inti_subflag_z_in_string, .init=redirect_all_stdprintfdi)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010i", nb);
    my_printf("%010i", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, inti_subflag_z_neg__in_string, .init=redirect_all_stdprintfdi)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010i", nb);
    my_printf("%010i", nb);
    cr_assert_stdout_eq_str(buff);
}
