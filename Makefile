##
## Makefile for   in /home/courne_l/rendu/synthese/FASTAtools
## 
## Made by courneil lucasc
## Login   <courne_l@epitech.net>
## 
## Started on  Mon Jun 20 09:24:25 2016 courneil lucasc
## Last update Tue Jun 21 18:56:57 2016 courneil lucasc
##

NAME	= FASTAtools

CC	= clang -g -W -Wall -Wextra

CFLAGS  = -I./include/

SRCS	= main.c \
	  srcs/my_malloc.c \
	  srcs/my_exit.c \
	  srcs/my_putstr.c \
	  srcs/my_putchar.c \
	  srcs/read_files.c \
	  srcs/option_one.c \
	  srcs/option_two.c \
	  srcs/option_three.c \
	  srcs/option_five.c \
	  srcs/option_six.c \
	  srcs/help.c \
	  srcs/check_option.c \
	  srcs/strcapitalize.c \
	  srcs/strtowordtab.c

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
