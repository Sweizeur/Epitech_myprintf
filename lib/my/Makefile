##
## EPITECH PROJECT, 2023
## makefile
## File description:
## 10
##

SRC     =	my_putstr.c		  \
		my_putchar.c		  \
		my_put_nbr.c		  \
		flag_d_i.c		  \
		flag_s.c		  \
		flag_c.c		  \
		flag_percent.c		  \
		flag_o.c		  \
		flag_u.c		  \
		flag_x.c		  \
		flag_alphax.c		  \
		flag_e.c		  \
		flag_alphae.c		  \
		flag_f.c		  \
		flag_alphaf.c		  \
		flag_p.c		  \
		flag_point.c		  \
		flag_a.c		  \
		flag_alphaa.c		  \
		flag_g.c		  \
		mod_h.c			  \
		mod_hh.c		  \
		mod_l.c			  \
		mod_ll.c		  \
		mod_alphal.c			  \
		my_putnbr_base.c	  \
		my_revstr.c		  \
		my_strlen.c		  \
		my_strdup.c		  \
		my_strcpy.c		  \
		my_strupcase.c		  \
		my_strncpy.c		  \
		my_double_to_scient.c     \
		my_double_f.c    	  \
		my_intlen.c          	  \
		my_nbr_to_str.c      	  \
		my_pointer.c      	  \
		my_precision.c      	  \
		my_double_to_hex.c     	  \
		my_f_or_e.c     	  \
		my_g_to_e.c     	  \
		my_printf.c      	  \


OBJ	=	$(SRC:.c=.o)

INCL	=	include/my.h

NAME	=	../../libmy.a

CFLAG	=	-W -Wall -Wextra

CPPFLAGS	=	-I./include

LDFLAGS	=	-L./lib/my

LDLIBS	=	-lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	find . -name '#*#' -delete -o -name '*~' -delete

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all

.PHONY:	clean all fclean re
