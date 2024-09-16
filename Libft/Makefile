# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 13:30:31 by jvillagr          #+#    #+#              #
#    Updated: 2024/09/16 16:17:36 by jvillagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

CC = gcc

NAME = libft.a

NOC = \033[0m
YELLOW = \033[1;33m
GREEN = \033[1;32m
RED = \033[1;31m

SRC = ft_isalpha.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_isascii.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcat.c \
	   ft_strrchr.c \
	   ft_bzero.c \
	   ft_isdigit.c \
	   ft_memset.c \
	   ft_strlcpy.c \
	   ft_calloc.c \
	   ft_isprint.c \
	   ft_strchr.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_isalnum.c \
	   ft_memchr.c \
	   ft_strdup.c \
	   ft_strncmp.c \
	   ft_toupper.c \
	   ft_calloc.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_itoa.c \
	   ft_split.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

OBJ = ${SRC:.c=.o}

B_SRC = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

B_OBJ = ${B_SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

INCLUDE = libft.h

all: ${NAME}

start:
	@echo "$(YELLOW)Compiling libft ...$(NOC)"

${NAME}: start ${OBJ} ${INCLUDE}
	@${LIB} ${NAME} ${OBJ}
	@echo "$(GREEN)Libft compiled ✓$(NOC)"

%.o: %.c
	@${CC} ${CCFLAGS} -c -o $@ $<

bonus: start ${B_OBJ} ${INCLUDE}
	@${LIB} ${NAME} ${B_OBJ}
	@echo "$(GREEN)Libft compiled with bonus ✓$(NOC)"

clean:
	@rm -f ${OBJ} ${B_OBJ}
	@echo "$(RED)Libft objects deleted ✓$(NOC)"

fclean: clean
	@rm -f ${NAME}
	@echo "$(RED)Libft deleted ✓$(NOC)"

re: fclean all

.PHONY: all clean fclear
