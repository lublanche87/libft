# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshin <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/25 20:35:59 by sshin             #+#    #+#              #
#    Updated: 2019/07/29 21:05:10 by sshin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAG = -Wall -Wextra -Werror -g

LIBFILES = $(SRC:.c=.o)

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c \
	  ft_strsub.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strtrim.c \
	  ft_lstnew.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstadd.c \
	  ft_print_hex.c \
	  ft_print_binary.c \
	  ft_swap.c \
	  ft_clamp.c \
	  ft_strnjoin.c \
	  ft_hex_to_integer.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(LIBFILES)
	ranlib $(NAME)

clean:
	rm -f $(LIBFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
