##
## Makefile for Exo01 in /home/besnai_m/rendu/day11/lib/my
## 
## Made by michael besnainou
## Login   <besnai_m@epitech.net>
## 
## Started on  Mon Oct 20 10:11:47 2014 michael besnainou
## Last update Sun Nov 16 21:04:13 2014 michael besnainou
##

SRC	= my_getnbr.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_strlen.c \
	my_put_unsigned_nbr.c \
	my_put_nbr_base2.c \
	my_printf.c \

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -ansi -pedantic

FILE	= a.out

CC	= gcc

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
