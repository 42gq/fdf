# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 02:00:33 by gquerre           #+#    #+#              #
#    Updated: 2017/04/22 04:36:12 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./SRC/get_next_line.c ./SRC/ft_strclr_until.c ./SRC/ft_strjoinfree.c ./SRC/ft_strchr_count.c ./SRC/ft_memset.c ./SRC/ft_bzero.c ./SRC/ft_memcpy.c ./SRC/ft_memccpy.c ./SRC/ft_memmove.c ./SRC/ft_memchr.c ./SRC/ft_memcmp.c ./SRC/ft_strlen.c ./SRC/ft_strdup.c ./SRC/ft_strcpy.c ./SRC/ft_strncpy.c ./SRC/ft_strcat.c ./SRC/ft_strncat.c ./SRC/ft_strlcat.c ./SRC/ft_strchr.c ./SRC/ft_strrchr.c ./SRC/ft_strstr.c ./SRC/ft_strnstr.c ./SRC/ft_strncmp.c ./SRC/ft_atoi.c ./SRC/ft_isalpha.c ./SRC/ft_isdigit.c ./SRC/ft_isalnum.c ./SRC/ft_isascii.c ./SRC/ft_isprint.c ./SRC/ft_toupper.c ./SRC/ft_tolower.c ./SRC/ft_memalloc.c ./SRC/ft_memdel.c ./SRC/ft_strnew.c ./SRC/ft_strcmp.c ./SRC/ft_strdel.c ./SRC/ft_strclr.c ./SRC/ft_striter.c ./SRC/ft_striteri.c ./SRC/ft_strmap.c ./SRC/ft_strmapi.c ./SRC/ft_strequ.c ./SRC/ft_strnequ.c ./SRC/ft_strsub.c ./SRC/ft_strjoin.c ./SRC/ft_strtrim.c ./SRC/ft_strsplit.c ./SRC/ft_itoa.c ./SRC/ft_putchar.c ./SRC/ft_putstr.c ./SRC/ft_putendl.c ./SRC/ft_putnbr.c ./SRC/ft_putchar_fd.c ./SRC/ft_putstr_fd.c ./SRC/ft_putendl_fd.c ./SRC/ft_putnbr_fd.c ./SRC/ft_lstnew.c ./SRC/ft_lstadd.c ./SRC/ft_lstdelone.c ./SRC/ft_lstiter.c ./SRC/ft_lstmap.c ./SRC/ft_lstdel.c ./SRC/ft_countiter.c ./SRC/ft_countstriter.c ./SRC/ft_dcmpt.c ./SRC/ft_checkedge.c ./SRC/ft_checkrectangle.c

FLAG = -Werror -Wextra -Wall

OBJ = ./get_next_line.o ./ft_strclr_until.o ./ft_strjoinfree.o ./ft_strchr_count.o ./ft_memset.o ./ft_bzero.o ./ft_memcpy.o ./ft_memccpy.o ./ft_memmove.o ./ft_memchr.o ./ft_memcmp.o ./ft_strlen.o ./ft_strdup.o ./ft_strcpy.o ./ft_strncpy.o ./ft_strcat.o ./ft_strncat.o ./ft_strlcat.o ./ft_strchr.o ./ft_strrchr.o ./ft_strstr.o ./ft_strnstr.o ./ft_strncmp.o ./ft_atoi.o ./ft_isalpha.o ./ft_isdigit.o ./ft_isalnum.o ./ft_isascii.o ./ft_isprint.o ./ft_toupper.o ./ft_tolower.o ./ft_memalloc.o ./ft_memdel.o ./ft_strnew.o ./ft_strdel.o ./ft_strcmp.o ./ft_strclr.o ./ft_striter.o ./ft_striteri.o ./ft_strmap.o ./ft_strmapi.o ./ft_strequ.o ./ft_strnequ.o ./ft_strsub.o ./ft_strjoin.o ./ft_strtrim.o ./ft_strsplit.o ./ft_itoa.o ./ft_putchar.o ./ft_putstr.o ./ft_putendl.o ./ft_putnbr.o ./ft_putchar_fd.o ./ft_putstr_fd.o ./ft_putendl_fd.o ./ft_putnbr_fd.o ./ft_lstnew.o ./ft_lstadd.o ./ft_lstdelone.o ./ft_lstiter.o ./ft_lstmap.o ./ft_lstdel.o ./ft_countiter.o ./ft_countstriter.o ./ft_dcmpt.o ./ft_checkedge.o ./ft_checkrectangle.o


all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
