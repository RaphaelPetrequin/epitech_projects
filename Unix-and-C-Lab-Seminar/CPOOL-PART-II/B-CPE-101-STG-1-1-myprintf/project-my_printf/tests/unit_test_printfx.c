/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFX
** File description:
** Tests the fct printfx
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfx(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, hexaneg_in_string, .init=redirect_all_stdprintfx)
{
    int nb = -42;

    my_printf("The hexa of -42 is %x.", nb);
    cr_assert_stdout_eq_str("The hexa of -42 is ffffffd6.");
}

Test(my_printf, hexapos_in_string, .init=redirect_all_stdprintfx)
{
    int nb = 42;

    my_printf("The hexa of 42 is %x.", nb);
    cr_assert_stdout_eq_str("The hexa of 42 is 2a.");
}

Test(my_printf, hexanull_in_string, .init=redirect_all_stdprintfx)
{
    int nb = 0;

    my_printf("The hexa of 0 is %x.", nb);
    cr_assert_stdout_eq_str("The hexa of 0 is 0.");
}

Test(my_printf, hexapimp_in_string, .init=redirect_all_stdprintfx)
{
    int nb = 23;
    char buff[30];

    sprintf(buff, "The hexa of 23 is %#x.", nb);
    my_printf("The hexa of 23 is %#x.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexapimpneg_in_string, .init=redirect_all_stdprintfx)
{
    int nb = -23;
    char buff[30];

    sprintf(buff, "The hexa of -23 is %#x.", nb);
    my_printf("The hexa of -23 is %#x.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexapimpnull_in_string, .init=redirect_all_stdprintfx)
{
    int nb = 0;
    char buff[30];

    sprintf(buff, "The hexa of 0 is %#x.", nb);
    my_printf("The hexa of 0 is %#x.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexa_subflag_z_in_string, .init=redirect_all_stdprintfx)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010x", nb);
    my_printf("%010x", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexa_subflag_z_neg__in_string, .init=redirect_all_stdprintfx)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010x", nb);
    my_printf("%010x", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexa_subflag_z_null__in_string, .init=redirect_all_stdprintfx)
{
    int nb = 0;
    char buff[20];

    sprintf(buff, "%010x", nb);
    my_printf("%010x", nb);
    cr_assert_stdout_eq_str(buff);
}
