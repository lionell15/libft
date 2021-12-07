# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 21:39:49 by lionell15         #+#    #+#              #
#    Updated: 2021/12/07 22:24:39 by lionell15        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	=	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c
OBJS	= $(SRCS:.c=.o)
CC	= gcc
RM	= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror -std=c99
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS}
	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

program:
	${CC} main.c -lft -L. -o libft
    
fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)
    
re: fclean all

.PHONY: all clean fclean program re .c.o
