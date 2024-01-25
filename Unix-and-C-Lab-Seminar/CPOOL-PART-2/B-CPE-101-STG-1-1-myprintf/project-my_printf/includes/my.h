/*
** EPITECH PROJECT, 2023
** MY
** File description:
** Contains the prototypes of the functions exposed by libmy.a
*/

#include <stdlib.h>
#include <stdarg.h>

#ifndef MY
    #define MY

void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
int my_strlen(char const *);
int my_intlen(int);
int my_unsigned_intlen(unsigned int);
int my_power(int, int);
unsigned int my_put_unsigned_nbr(unsigned int);
int makehexa(unsigned int, char *, int, char);
int makelonghexa(long, char *, char);
int afterdot(double, signed long int);
int ifzero(double, signed long int);
int specialcase(double);
int specialcasemin(double);
int specialcasemaj(double);
int put_zerosorspaces(int, char);
int is_zero(char, int);
int lenhexa(unsigned int, char *, int, char);
int makesubflagforfloat(char, int, double);
int makesubflagfor_e_emaj(char, int, double);
int lenfloat(double, signed long int);
int len_e_emaj(double, signed long int);
int nombreexpo(double *);
int my_printf(const char *, ...);
int find_flag(const char, va_list list, char, int);
int find_subflag(const char *, va_list, int *);
int printfm(va_list list, char, int);
int printfc(va_list list, char, int);
int printfs(va_list list, char, int);
int printfdi(va_list list, char, int);
int printfu(va_list list, char, int);
int printfo(va_list list, char, int);
int printfx(va_list list, char, int);
int printfxmaj(va_list list, char, int);
int printfp(va_list list, char, int);
int printff(va_list list, char, int);
int printffmaj(va_list list, char, int);
int printfd(va_list list, char, int);
int printfe(va_list list, char, int);
int printfemaj(va_list list, char, int);

#endif /*MY*/
