# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 14:24:05 by lstorey           #+#    #+#              #
#    Updated: 2023/11/13 14:41:35 by lstorey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
RM			= rm -f
FLAGS		= -Wall -Werror -Wextra
LIBS 		= libft.h
INCLUDES	= ./
SRC 		=	ft_isalnum.c \
				ft_isalpha.c \
				ft_atoi.c \
				ft_bzero.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strrchr.c \
				ft_strdup.c \
				ft_tolower.c \
				ft_memcmp.c \
				ft_memchr.c \
				ft_calloc.c \
				ft_strjoin.c \
				ft_substr.c \
				ft_strtrim.c \
				ft_toupper.c 

OBJ = $(SRC:.c=.o)

$(NAME)		:	$(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o	:%.c
	gcc $(FLAGS) -c $< -o $@

all			:	$(NAME)

clean		:
			rm -f $(OBJ) 

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all

.PHONY 		: all clean fclean re