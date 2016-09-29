# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 16:22:30 by copayanc          #+#    #+#              #
#    Updated: 2016/09/12 19:42:26 by copayanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = srcs/ft_putchar.c\
 		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c\

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = ./includes/

all :
	make $(NAME)

$(NAME) :
	$(GCC) $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
