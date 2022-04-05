# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 16:14:34 by pmillan-          #+#    #+#              #
#    Updated: 2022/04/05 16:25:30 by pmillan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCE = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c \
ft_putnbr_fd.c ft_striteri.c
SOURCEBONUS = ft_lstnew.c
OBJECTSBONUS= $(SOURCEBONUS:.c=.o)
OBJECTS = $(SOURCE:.c=.o)
INC = libft.h


$(NAME): $(OBJECTS) $(OBJECTSBONUS)
		 ar rcs $(NAME) $(OBJECTS) $(OBJECTSBONUS)

all: $(NAME)
bonus: $(OBJECTSBONUS)
		 ar rcs $(NAME) $(OBJECTSBONUS)
.PHONY: all clean fclean re
clean:
		rm -rf $(OBJECTS) $(OBJECTSBONUS)
fclean: clean
		rm -rf $(NAME)
re: fclean all

#$(CC) $(CFLAGS) $(SOURCE)
#$(OBJECTS)
#ar rcs