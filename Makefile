# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 16:14:34 by pmillan-          #+#    #+#              #
#    Updated: 2022/04/19 16:11:54 by pmillan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
S_NAME = .source
B_NAME = .bonus
CC = gcc
CFLAGS = -Wall -Werror -Wextra #-I.
SOURCE = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c \
ft_putnbr_fd.c ft_striteri.c
SOURCEBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstmap.c
OBJECTS = $(SOURCE:.c=.o)
#ANTES SIN OBJECTS
OBJECTSBONUS = $(OBJECTS) $(SOURCEBONUS:.c=.o)

#NAME antes era lo mismo pero sin la última línea
$(S_NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)
		touch $(S_NAME)

$(NAME): $(S_NAME)

$(B_NAME):$(OBJECTSBONUS)
		ar rcs $(NAME) $(OBJECTSBONUS)
		touch $(B_NAME)

all: $(S_NAME)
bonus: $(B_NAME)
.PHONY: clean fclean
clean:
		rm -rf $(OBJECTSBONUS)
fclean: clean
		rm -rf $(NAME) $(S_NAME) $(B_NAME)
re: fclean all

#rm -rf $(B_NAME)
#rm -rf $(S_NAME)
#$(CC) $(CFLAGS) $(SOURCE)
#$(OBJECTS)
#ar rcs