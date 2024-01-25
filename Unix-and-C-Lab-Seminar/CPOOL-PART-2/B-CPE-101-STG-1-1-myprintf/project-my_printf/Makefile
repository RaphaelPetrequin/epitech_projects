##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## Makefile
##

SRC	=	includes/my_putchar.c			\
		includes/my_put_nbr.c			\
		includes/my_putstr.c			\
		includes/my_strlen.c			\
		includes/my_intlen.c			\
		includes/my_power.c			\
		includes/my_put_unsigned_nbr.c		\
		includes/my_unsigned_intlen.c		\
		includes/makehexa.c			\
		includes/makelonghexa.c			\
		includes/put_zerosorspaces.c		\
		includes/ifzero.c			\
		includes/afterdot.c			\
		includes/specialcase.c			\
		includes/specialcasemin.c		\
		includes/specialcasemaj.c		\
		includes/is_zero.c			\
		includes/lenhexa.c			\
		includes/lenfloat.c			\
		includes/makesubflagforfloat.c		\
		includes/nombreexpo.c			\
		includes/makesubflagfor_e_emaj.c	\
		includes/len_e_emaj.c			\
		flags/printfs.c				\
		flags/printfc.c				\
		flags/printfdi.c			\
		flags/printfm.c				\
		flags/printfu.c				\
		flags/printfo.c				\
		flags/printfx.c				\
		flags/printfxmaj.c			\
		flags/printff.c				\
		flags/printffmaj.c			\
		flags/printfp.c				\
		flags/printfe.c				\
		flags/printfemaj.c			\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

FLAGTEST	=	--coverage -lcriterion

TEST	=	tests/unit_test*

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

unit_tests:	fclean all
		gcc -o unit_tests $(SRC) $(TEST) $(FLAGTEST)

tests_run:	unit_tests
		./unit_tests

gcovr:
	gcovr --exclude tests/unit_tests

tclean:
	rm unit_tests*
