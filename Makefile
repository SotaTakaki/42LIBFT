# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 01:35:42 by stakaki           #+#    #+#              #
#    Updated: 2021/04/20 19:19:33 by stakaki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

OBJCS = $(SRCS:.c=.o)

INCLUDE = libft.h

CC = gcc

CFLAG = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(NAME): $(OBJCS)
	ar rc $(NAME) $(OBJCS)

all: $(NAME)

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
