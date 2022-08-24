# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 14:14:16 by taboterm          #+#    #+#              #
#    Updated: 2022/08/24 19:15:29 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printstr.c ft_printchar.c ft_uitoa.c\
	ft_putnum_mod.c ft_printptr.c

OBJS = $(SRC:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -c -Wall -Wextra -Werror
INCLUDE = ft_printf.h

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	/bin/rm -f *.o a.out

fclean: clean
	/bin/rm -f *.o a.out $(NAME)

re: fclean all

.PHONY: clean fclean all re

# -c  - Directs the compiler to suppress linking with ld(1) and to produce a .o file for each source file
# 
# The - ar - command maintains the indexed libraries used by the linkage editor. The ar command combines one 
# or more named files into a single archive file written in ar archive format. When the ar command creates 
# a library, it creates headers in a transportable format; when it creates or updates a library, it rebuilds 
# the symbol table. See the ar file format entry for information on the format and structure of indexed 
# archives and symbol tables.
# 
# A phony target is one that is not really the name of a file; rather it is just a name for a recipe to be 
# executed when you make an explicit request.