# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/19 15:28:21 by mluttrin          #+#    #+#              #
#    Updated: 2016/09/21 23:23:55 by mluttrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ./src/main.c ./src/ft_putchar.c ./src/ft_putstr.c ./src/ft_strlen.c\
./src/ft_cut_in_line.c ./src/ft_brute_force.c ./src/ft_fill_str.c \
./src/ft_print_tab.c ./src/ft_strdup.c ./src/ft_look_if_map_is_good.c\
./src/ft_atoi.c

OBJS = main.o ft_putchar.o ft_putstr.o ft_strlen.o ft_cut_in_line.o\
ft_brute_force.o ft_fill_str.o ft_print_tab.o ft_strdup.o\
ft_look_if_map_is_good.o ft_atoi.o

HEADER = ./include/

FLAGS = -Wall -Wextra -Werror

GCC = gcc

all :
	@make $(NAME)

$(NAME) :
	$(GCC) $(FLAGS) -I$(HEADER) -c $(SRC)
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
