/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFEMAJ
** File description:
** Tests the fct printfemaj
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfemaj(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, emaj_with_pos_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 33.03;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_neg_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -33.03;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_null_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_wait_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.3;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_neg_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_nan_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0 / 0.0;
    char buff[20];

    sprintf(buff, "%E", nb);
    my_printf("%E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z_pos_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 33.03;
    char buff[20];

    sprintf(buff, "%015E", nb);
    my_printf("%015E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z_neg_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -33.03;
    char buff[20];

    sprintf(buff, "%015E", nb);
    my_printf("%015E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z_null_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%010E", nb);
    my_printf("%010E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%015E", nb);
    my_printf("%015E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z_neg_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%015E", nb);
    my_printf("%015E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_z__nan_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0 / 0.0;
    char buff[20];

    sprintf(buff, "%015E", nb);
    my_printf("%015E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus_pos_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 33.03;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus_neg_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -33.03;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus_null_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus_neg_inf_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = -0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, emaj_with_subflag_plus__nan_nb, .init=redirect_all_stdprintfemaj)
{
    float nb = 0.0 / 0.0;
    char buff[20];

    sprintf(buff, "%+E", nb);
    my_printf("%+E", nb);
    cr_assert_stdout_eq_str(buff);
}
