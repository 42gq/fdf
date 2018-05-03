/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 03:41:03 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:42:38 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SRC/ft_fdf.h"

int	main(int argc, char **argv)
{
	char		**grille;
	t_struct	**map;
	t_env		*e;

	if (argc != 2)
	{
		ft_putstr("Put only 1 file\n");
		return (0);
	}
	e = (t_env*)ft_memalloc(sizeof(t_env));
	if (ft_init_mlx(e, 0, 0) == 1)
		return (0);
	grille = ft_save_map(argv);
	map = ft_swap_to_struct(grille);
	ft_init_mlx(e, map, 1);
	ft_count_max(e);
	ft_init_mlx(e, map, 2);
	mlx_hook(e->window, 2, 3, ft_hotkeys, e);
	mlx_loop_hook(e->mlx, &ft_loop_event, e);
	mlx_loop(e->mlx);
	return (0);
}
