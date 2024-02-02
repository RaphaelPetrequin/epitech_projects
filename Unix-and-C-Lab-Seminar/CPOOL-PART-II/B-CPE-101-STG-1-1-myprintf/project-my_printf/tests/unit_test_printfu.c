/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTU
** File description:
** Tests the fct printfu
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfu(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, unint_pos_in_string, .init=redirect_all_stdprintfu)
{
    unsigned int u = 8;

    my_printf("J'ai eu %u au bac de philo", u);
    cr_assert_stdout_eq_str("J'ai eu 8 au bac de philo");
}

Test(my_printf, unint_neg_in_string, .init=redirect_all_stdprintfu)
{
    int u = -8;

    my_printf("J'ai eu %u au bac de philo", u);
    cr_assert_stdout_eq_str("J'ai eu 4294967288 au bac de philo");
}

Test(my_printf, unint_null_in_string, .init=redirect_all_stdprintfu)
{
    int u = 0;

    my_printf("J'ai eu %u au bac de philo", u);
    cr_assert_stdout_eq_str("J'ai eu 0 au bac de philo");
}

Test(my_printf, unint_subflag_z_in_string, .init=redirect_all_stdprintfu)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010u", nb);
    my_printf("%010u", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, unint_subflag_z_neg__in_string, .init=redirect_all_stdprintfu)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010u", nb);
    my_printf("%010u", nb);
    cr_assert_stdout_eq_str(buff);
}
