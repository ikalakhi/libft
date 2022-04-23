# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 16:31:04 by ikalakhi          #+#    #+#              #
#    Updated: 2021/12/13 16:20:23 by ikalakhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRC = ft_bzero.c   ft_isalpha.c ft_isdigit.c ft_memcpy.c  ft_memset.c  \
	  ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlen.c	\
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c	\
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	  ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
