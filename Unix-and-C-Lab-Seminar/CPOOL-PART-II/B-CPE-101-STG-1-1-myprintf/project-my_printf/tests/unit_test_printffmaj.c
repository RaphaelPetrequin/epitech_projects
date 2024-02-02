/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFFMAJ
** File description:
** Tests the fct printffmaj
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintffmaj(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, nullfloatmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 0.0;

    my_printf("It's a 0 but with more zero: %F", nb);
    cr_assert_stdout_eq_str("It's a 0 but with more zero: 0.000000");
}

Test(my_printf, negfloatmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = -3.42;

    my_printf("It's a special -42: %F", nb);
    cr_assert_stdout_eq_str("It's a special -42: -3.420000");
}

Test(my_printf, posfloatmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 3.14;

    my_printf("IS %F PI ?", nb);
    cr_assert_stdout_eq_str("IS 3.140000 PI ?");
}

Test(my_printf, specialfloatmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 3.0014;

    my_printf("I think pi as a problem: %F", nb);
    cr_assert_stdout_eq_str("I think pi as a problem: 3.001400");
}

Test(my_printf, omginfmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = (0.001 / 0.0);

    my_printf("My love for you is %F", nb);
    cr_assert_stdout_eq_str("My love for you is INF");
}

Test(my_printf, omginfmajnull_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = -(0.001 / 0.0);

    my_printf("My love for you is %F", nb);
    cr_assert_stdout_eq_str("My love for you is -INF");
}

Test(my_printf, omgnanmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = (0.0 / 0.0);

    my_printf("Do i have love for you ? %F", nb);
    cr_assert_stdout_eq_str("Do i have love for you ? -NAN");
}

Test(my_printf, omgminusnanmaj_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = -(0.0 / 0.0);

    my_printf("Do i have love for you ? %F", nb);
    cr_assert_stdout_eq_str("Do i have love for you ? -NAN");
}

Test(my_printf, floatmaj_subflag_plus_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 33.0;
    char buff[20];

    sprintf(buff, "%+F", nb);
    my_printf("%+F", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmaj_subflag_plus_neg__in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = -33.0;
    char buff[20];

    sprintf(buff, "%+F", nb);
    my_printf("%+F", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmaj_subflag_plus_null__in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%+F", nb);
    my_printf("%+F", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmaj_subflag_z_in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 33.0;
    char buff[20];

    sprintf(buff, "%010F", nb);
    my_printf("%010F", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmaj_subflag_z_neg__in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = -33.0;
    char buff[20];

    sprintf(buff, "%010F", nb);
    my_printf("%010F", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmaj_subflag_z_null__in_string, .init=redirect_all_stdprintffmaj)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%010F", nb);
    my_printf("%010F", nb);
    cr_assert_stdout_eq_str(buff);
}
