# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/13 16:04:02 by gquerre           #+#    #+#              #
#    Updated: 2017/06/15 02:55:19 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = ./SRC/ft_char_to_struct_iso.c ./SRC/ft_count_lines.c ./SRC/ft_count_max.c ./SRC/ft_count_nbsofnbs_on_a_line.c ./SRC/ft_draw.c ./SRC/ft_create_image.c ./SRC/ft_draw_lines.c ./SRC/ft_init_mlx.c ./SRC/ft_loop_event.c ./SRC/ft_put_px.c ./SRC/ft_save_map.c ./SRC/ft_translate.c ./SRC/ft_hotkeys.c ./SRC/ft_prev_err.c ./SRC/ft_color.c ./main.c

FLAG = -lmlx -framework OpenGL -framework Appkit -Werror -Wextra -Wall

SUPP = ./SRC/ft_fdf.h ./SRC/libft/libft.a

OBJ = ./ft_char_to_struct_iso.o ./ft_count_lines.o ./ft_count_max.o ./ft_count_nbsofnbs_on_a_line.o ./ft_draw.o ./ft_create_image.o ./ft_draw_lines.o ./ft_init_mlx.o ./ft_loop_event.o ./ft_put_px.o ./ft_save_map.o ./ft_translate.o ./ft_hotkeys.o ./ft_prev_err.o ./ft_color.o

all: $(NAME)

$(NAME): SRC/libft/libft.a $(SRC)
	gcc $(FLAG) -I $(SUPP) $(SRC) -o $(NAME)

SRC/libft/libft.a:
	make -C SRC/libft/
	make clean -C SRC/libft/

clean:
	rm -f $(OBJ)
	rm -f SRC/libft/libft.a

fclean: clean
	rm -f $(NAME)

re: fclean all
