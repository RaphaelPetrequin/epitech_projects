/*
** EPITECH PROJECT, 2023
** TEST_MY_REVSTR
** File description:
** Tests the fct my_revstr
*/

#include <criterion/criterion.h>

Test (my_revstr, reverse_string)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
