/*
** EPITECH PROJECT, 2023
** UNIT_TEST_PRINTFXMAJ
** File description:
** Tests the fct printfxmaj
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

void redirect_all_stdprintfxmaj(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, hexamajneg_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = -42;

    my_printf("The hexamaj of -42 is %X.", nb);
    cr_assert_stdout_eq_str("The hexamaj of -42 is FFFFFFD6.");
}

Test(my_printf, hexamajpos_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 42;

    my_printf("The hexamaj of 42 is %X.", nb);
    cr_assert_stdout_eq_str("The hexamaj of 42 is 2A.");
}

Test(my_printf, hexamajnull_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 0;

    my_printf("The hexamaj of 0 is %X.", nb);
    cr_assert_stdout_eq_str("The hexamaj of 0 is 0.");
}

Test(my_printf, hexamajpimp_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 32;
    char buff[30];

    sprintf(buff, "The hexamaj of 32 is %#X.", nb);
    my_printf("The hexamaj of 32 is %#X.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexamajpimpneg_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = -32;
    char buff[30];

    sprintf(buff, "The hexamaj of -32 is %#X.", nb);
    my_printf("The hexamaj of -32 is %#X.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexamajpimpnull_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 0;
    char buff[30];

    sprintf(buff, "The hexamaj of 0 is %#X.", nb);
    my_printf("The hexamaj of 0 is %#X.", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexamaj_subflag_z_in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 33;
    char buff[20];

    sprintf(buff, "%010X", nb);
    my_printf("%010X", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexamaj_subflag_z_neg__in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = -33;
    char buff[20];

    sprintf(buff, "%010X", nb);
    my_printf("%010X", nb);
    cr_assert_stdout_eq_str(buff);
}

Test(my_printf, hexamaj_subflag_z_null__in_string, .init=redirect_all_stdprintfxmaj)
{
    int nb = 0;
    char buff[20];

    sprintf(buff, "%010X", nb);
    my_printf("%010X", nb);
    cr_assert_stdout_eq_str(buff);
}
