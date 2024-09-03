##
## EPITECH PROJECT, 2023
## makefile
## File description:
## 10
##

SRC	=	essai/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

CFLAG	=	-W -Wall -Wextra

CPPFLAGS	=	-I./include

LDFLAGS	=	-L./

LDLIBS	=	-lmy

all:	$(NAME)

$(NAME):	libmy.a

libmy.a:
	make -C./lib/my

clean:
	rm -f $(OBJ)
	find . -name '#*#' -delete -o -name '*~' -delete
	find . -name "coding-style-reports.log" -delete
	find . -name "vgcore*" -delete
	make clean -C./lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C./lib/my

re: fclean all

t:	libmy.a $(OBJ)
	$(CC) $(LDFLAGS) -g -o $(NAME) $(OBJ) $(LDLIBS)
	make clean

.PHONY:	clean all fclean re
