/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mlx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 01:34:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:41:25 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_init_mlx(t_env *e, t_struct **map, int n)
{
	if (n == 0)
	{
		if (!(e->mlx = mlx_init()))
			return (1);
		e->window = mlx_new_window(e->mlx, 1280, 720, "FDF");
		e->r = 0;
		e->g = 0;
		e->b = 0;
		e->zoom = 30;
		e->z_ch = 1;
		e->a = 0;
		e->v = 2;
		e->rotation = 0.20;
		e->rotation2 = 0.40;
	}
	if (n == 1)
		e->map = map;
	if (n == 2)
	{
		e->zoom = 120;
		e->zoom = e->zoom / ((e->smax + e->hmax) /
				(sqrt(e->hmax) + sqrt(e->smax)));
	}
	return (0);
}
