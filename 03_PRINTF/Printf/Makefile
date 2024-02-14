# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 18:26:05 by gcamblor          #+#    #+#              #
#    Updated: 2024/02/14 18:26:14 by gcamblor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

SRCS =	ft_isalpha.c \	

OBJS = $(SRCS:%.c=%.o)

CFLAGS = -Wall -Werror -Wextra

AR = ar rc

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re bonus