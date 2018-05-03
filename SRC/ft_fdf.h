/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 04:30:30 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:38:40 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

# include "./libft/SRC/libft.h"
# include <math.h>
# include <stdio.h>
# include <mlx.h>
# include <fcntl.h>
# include <grp.h>
# include <pwd.h>
# define ANGLE 1
# define SIZE 1

typedef struct	s_struct
{
	int			x;
	int			y;
	int			z;
	int			k;
}				t_struct;

typedef struct	s_env
{
	void		*mlx;
	void		*window;
	void		*img_ptr;
	char		*data;
	double		color;
	double		rotation;
	double		rotation2;
	double		de;
	int			a;
	int			aa;
	int			v;
	int			x;
	int			y;
	int			z;
	int			z2;
	int			x2;
	int			y2;
	int			k;
	int			smax;
	int			hmax;
	int			b;
	int			g;
	int			r;
	int			zoom;
	int			z_ch;
	t_struct	**map;
}				t_env;

size_t			ft_count_nbs(char *str);
void			ft_clean_dblarray(char **tab);
size_t			ft_count_lines_oca(char **tab);
t_struct		**ft_swap_to_struct(char **t);
char			**ft_save_map(char **tab);
size_t			ft_count_lines_of_file(char **tab);
t_struct		**ft_apply_to_struct(t_struct **map, t_struct (*f)(t_struct));
void			ft_color(t_env *e);
void			ft_count_max(t_env *e);
void			ft_create_image(t_env *e, int n);
void			ft_draw(t_env *e);
void			ft_draw_lines(t_env *env);
int				ft_init_mlx(t_env *env, t_struct **map, int n);
int				ft_loop_event(t_env *e);
void			ft_put_px(t_env *e, int x, int y);
void			ft_translate(t_env *e, int x, int y, int n);
int				ft_hotkeys(int keycode, t_env *e);
void			ft_error_fdf(int i);

#endif
