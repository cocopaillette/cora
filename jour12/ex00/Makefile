# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 21:00:32 by copayanc          #+#    #+#              #
#    Updated: 2016/09/15 22:46:42 by copayanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OBJS = ft_display_file.o

GCC = gcc

FLAGS = -Wall -Werror -Wextra

HEADER  = ./ft.h

all :
	@make $(NAME)

$(NAME) :
	$(GCC) $(SRC) $(FLAGS) -c -I $(HEADER)
	$(GCC) -o $(NAME) $(OBJS)

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
