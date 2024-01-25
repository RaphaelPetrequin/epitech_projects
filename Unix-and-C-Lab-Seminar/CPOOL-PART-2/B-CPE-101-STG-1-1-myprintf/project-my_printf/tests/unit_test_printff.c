/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFF
** File description:
** Tests the fct printff
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintff(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, nullfloat_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.0;

    my_printf("It's a 0 but with more zero: %f", nb);
    cr_assert_stdout_eq_str("It's a 0 but with more zero: 0.000000");
}

Test(my_printf, negfloat_in_string, .init=redirect_all_stdprintff)
{
    float nb = -3.42;

    my_printf("It's a special -42: %f", nb);
    cr_assert_stdout_eq_str("It's a special -42: -3.420000");
}

Test(my_printf, posfloat_in_string, .init=redirect_all_stdprintff)
{
    float nb = 3.14;

    my_printf("IS %f PI ?", nb);
    cr_assert_stdout_eq_str("IS 3.140000 PI ?");
}

Test(my_printf, specialfloat_in_string, .init=redirect_all_stdprintff)
{
    float nb = 3.0014;

    my_printf("I think pi as a problem: %f", nb);
    cr_assert_stdout_eq_str("I think pi as a problem: 3.001400");
}

Test(my_printf, floatmin_bignb_in_string, .init=redirect_all_stdprintff)
{
    float nb = 33333.0;
    char buff[20];

    sprintf(buff, "%f", nb);
    my_printf("%f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, omginf_in_string, .init=redirect_all_stdprintff)
{
    float nb = (0.001 / 0.0);

    my_printf("My love for you is %f", nb);
    cr_assert_stdout_eq_str("My love for you is inf");
}

Test(my_printf, omginfnull_in_string, .init=redirect_all_stdprintff)
{
    float nb = -(0.001 / 0.0);

    my_printf("My love for you is %f", nb);
    cr_assert_stdout_eq_str("My love for you is -inf");
}

Test(my_printf, omgnan_in_string, .init=redirect_all_stdprintff)
{
    float nb = (0.0 / 0.0);

    my_printf("Do i have love for you ? %f", nb);
    cr_assert_stdout_eq_str("Do i have love for you ? -nan");
}

Test(my_printf, omgminusnan_in_string, .init=redirect_all_stdprintff)
{
    float nb = -(0.0) / (0.0);

    my_printf("Do i have love for you ? %f", nb);
    cr_assert_stdout_eq_str("Do i have love for you ? -nan");
}

Test(my_printf, floatmin_subflag_plus_in_string, .init=redirect_all_stdprintff)
{
    float nb = 33.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_plus_neg_in_string, .init=redirect_all_stdprintff)
{
    float nb = -33.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_plus_null_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_plus_nan_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.0 / 0.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_plus_inf_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_plus_neginf_in_string, .init=redirect_all_stdprintff)
{
    float nb = -0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%+f", nb);
    my_printf("%+f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_in_string, .init=redirect_all_stdprintff)
{
    float nb = 33.0;
    char buff[20];

    sprintf(buff, "%010f", nb);
    my_printf("%010f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_neg_in_string, .init=redirect_all_stdprintff)
{
    float nb = -33.0;
    char buff[20];

    sprintf(buff, "%010f", nb);
    my_printf("%010f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_null_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.0;
    char buff[20];

    sprintf(buff, "%010f", nb);
    my_printf("%010f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_nan_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.0 / 0.0;
    char buff[20];

    sprintf(buff, "%015f", nb);
    my_printf("%015f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_inf_in_string, .init=redirect_all_stdprintff)
{
    float nb = 0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%015f", nb);
    my_printf("%015f", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, floatmin_subflag_z_neginf_in_string, .init=redirect_all_stdprintff)
{
    float nb = -0.1 / 0.0;
    char buff[20];

    sprintf(buff, "%015f", nb);
    my_printf("%015f", nb);
    cr_assert_stdout_eq_str(buff);
}
