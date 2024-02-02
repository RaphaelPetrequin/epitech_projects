/*
** EPITECH PROJECT, 2023
** CONCAT_PARAMS
** File description:
** Turns the args into a single str
*/

char *concat_params(int argc, char **argv)
{
    char *str;
    int cpt = 0;
    int lnstr = 0;

    for (int j = 0; j < argc; j++) {
        lnstr += my_strlen(argv[j]);
    }
    str = malloc(sizeof(char) * (lnstr + argc + 1));
    for (int i = 0; i < argc; i++) {
        if (i != argc - 1) {
            my_strcat(my_strcat(str, argv[i]), "\n");
        } else {
            my_strcat(my_strcat(str, argv[i]), "\0");
        }
    }
    return (str);
}
