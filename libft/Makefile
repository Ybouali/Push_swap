# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 23:44:21 by ybouali           #+#    #+#              #
#    Updated: 2021/12/18 23:44:24 by ybouali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c get_next_line.c\
			ft_tolower.c ft_toupper.c  ft_atoi.c ft_itoa.c ft_calloc.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_substr.c \
			ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c\

OBJS	= $(SRCS:.c=.o)


HEADER	= libft.h

CC		= gcc

FLGS	= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar rc $(NAME) $(OBJS)

.c.o:
			@$(CC) $(FLGS) -I $(HEADER) -c $<

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re

