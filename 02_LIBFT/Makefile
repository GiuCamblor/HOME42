# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 19:50:55 by gcamblor          #+#    #+#              #
#    Updated: 2024/01/09 19:50:58 by gcamblor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
       ar rc $(NAME) $(OBJS)
all: $(NAME)

clean:
       rm -f $(OBJS)

fclean: clean
       rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re bonus
