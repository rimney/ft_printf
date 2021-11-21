# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 15:19:22 by rimney            #+#    #+#              #
#    Updated: 2021/11/20 20:20:54 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = srcs/*.c
OBJS = *.o
GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = header
MAIN = ft_printf.c
all :
	$(GCC) -I $(HEADER) -c $(FLAGS) $(SRCS) $(MAIN)
	ar rc $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
