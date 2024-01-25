/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFO
** File description:
** Tests the fct printfo
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfo(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, octoneg_in_string, .init=redirect_all_stdprintfo)
{
    int nb = -42;

    my_printf("The octo of -42 is %o.", nb);
    cr_assert_stdout_eq_str("The octo of -42 is 37777777726.");
}

Test(my_printf, octopos_in_string, .init=redirect_all_stdprintfo)
{
    int nb = 42;

    my_printf("The octo of 42 is %o.", nb);
    cr_assert_stdout_eq_str("The octo of 42 is 52.");
}

Test(my_printf, octonull_in_string, .init=redirect_all_stdprintfo)
{
    int nb = 0;

    my_printf("The octo of 0 is %o.", nb);
    cr_assert_stdout_eq_str("The octo of 0 is 0.");
}

Test(my_printf, octopimp_in_string, .init=redirect_all_stdprintfo)
{
    int nb = 12;
    char buff[30];

    sprintf(buff, "The octo of 12 is %#o.", nb);
    my_printf("The octo of 12 is %#o.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, octopimpneg_in_string, .init=redirect_all_stdprintfo)
{
    int nb = -12;
    char buff[30];

    sprintf(buff, "The octo of -12 is %#o.", nb);
    my_printf("The octo of -12 is %#o.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, octopimpnull_in_string, .init=redirect_all_stdprintfo)
{
    int nb = 0;
    char buff[30];

    sprintf(buff,"The octo of 0 is %#o.", nb);
    my_printf("The octo of 0 is %#o.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, octo_subflag_z_in_string, .init=redirect_all_stdprintfo)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010o", nb);
    my_printf("%010o", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, octo_subflag_z_neg__in_string, .init=redirect_all_stdprintfo)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010o", nb);
    my_printf("%010o", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, octo_subflag_z_null__in_string, .init=redirect_all_stdprintfo)
{
    int nb = 0;
    char buff[20];

    sprintf(buff, "%010o", nb);
    my_printf("%010o", nb);
    cr_assert_stdout_eq_str(buff);
}
