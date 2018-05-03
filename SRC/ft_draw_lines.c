/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_lines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 05:49:20 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:40:54 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_draw_lines(t_env *e)
{
	double	dx;
	double	dy;
	double	x;
	double	y;
	double	temp;

	e->color = (e->z * 4) + 200;
	x = e->x;
	y = e->y;
	dx = e->x2 - e->x;
	dy = e->y2 - e->y;
	temp = sqrt((dx * dx) + (dy * dy));
	dx /= temp;
	dy /= temp;
	e->de = (e->z - e->z2) / (temp / 4);
	while (temp >= 0)
	{
		ft_put_px(e, x, y);
		x += dx;
		y += dy;
		temp--;
		e->color -= e->de;
	}
}
