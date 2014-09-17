##
## Makefile for Makefile printf in /home/loisel_k/travail/Systeme-Unix/my_printf/src
## 
## Made by kevin loiseleur
## Login   <loisel_k@epitech.net>
## 
## Started on  Thu Nov 14 17:02:07 2013 kevin loiseleur
## Last update Sat Nov 16 19:19:02 2013 kevin loiseleur
##

NAME		= my_printf

SRC		= my_printf.c \
		my_printf_flags_char.c \
		my_printf_flags_convers.c \
		my_printf_flags_int.c \
		main.c

OBJ		= $(SRC:.c=.o)

HFILES		= my_printf.h

CP		= cp

RM		= rm -f

CC		= cc

all: $(NAME)

$(NAME): $(OBJ)
	cd ../my/; make
	$(CC) $(OBJ) -o $(NAME) -lmy -L ../ -I ../include/ -g
	$(CP) $(NAME) ../

clean:
	cd ../my/; make clean
	$(RM) $(OBJ)

fclean:
	cd ../my/; make fclean
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all
