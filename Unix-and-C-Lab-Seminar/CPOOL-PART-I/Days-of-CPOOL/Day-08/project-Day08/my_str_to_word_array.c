/*
** EPITECH PROJECT, 2023
** MY_STR_TO_WORD_ARRAY
** File description:
** Splits the str into words in an array
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_isalphnum(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return (1);
    } else if (c >= '0' && c <= '9') {
        return (1);
    } else {
        return (0);
    }
}

int my_lntab(char **tab, char const *str)
{
    int lntab = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalphnum(str[i]) == 0) {
            lntab++;
        }
    }
    return (lntab + 1);
}

int my_lnword(char const *str, int nxw)
{
    for (nxw; str[nxw] != '\0'; nxw++) {
        if (my_isalphnum(str[nxw]) == 1 && my_isalphnum(str[nxw + 1]) != 1) {
            return (nxw);
        }
    }
    return (nxw);
}

void *test(char const *str, int nxw)
{
    for (nxw; my_isalphnum(str[nxw]) == 0; nxw++) {
        if (nxw >= my_strlen(str)) {
            return NULL;
        }
    }
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int lntab = my_lntab(tab, str);
    int nxw = 0;
    int i = 0;
    int j = 0;

    tab = malloc(sizeof(char*) * (lntab + 1));
    tab[i] = 0;
    for (i; i < lntab; i++) {
    	test(str, nxw);
	    tab[i] = malloc(sizeof(char) * my_lnword(str, nxw) + 1);
	    for (nxw; str[nxw] != '\0' && my_isalphnum(str[nxw]) != 0; nxw++) {
            tab[i][j] = str[nxw];
	        j++;
	    }
	    tab[i][j] = '\0';
	    nxw++;
    }
    return (tab);
}

int main(void)
{
	char const str[] = "boss uhg ui";
	char **tab2 = my_str_to_word_array(str);

    printf("%s\n", tab2[0]);
	printf("%s\n", tab2[1]);
	printf("%s\n", tab2[2]);
	printf("%s\n", tab2[3]);
	printf("%s\n", tab2[4]);
}
