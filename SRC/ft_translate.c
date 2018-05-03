/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 04:53:46 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:42:08 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_recenter(t_env *e)
{
	e->x += 1280 / 2;
	e->x2 += 1280 / 2;
	e->y += 720 / 2;
	e->y2 += 720 / 2;
}

void	ft_translate(t_env *e, int x, int y, int n)
{
	int xt;
	int yt;

	xt = x - e->smax / 2;
	yt = y - e->hmax / 2;
	e->x = e->rotation2 * (xt - yt) * (e->zoom);
	e->y = e->rotation * (xt + yt) * (e->zoom);
	e->z = e->map[y][x].z;
	e->y -= e->map[y][x].z * e->z_ch * e->zoom / 10;
	if (n)
	{
		e->x2 = e->rotation2 * ((xt + 1) - yt) * (e->zoom);
		e->y2 = e->rotation * ((xt + 1) + yt) * (e->zoom);
		e->y2 -= e->map[y][x + 1].z * e->z_ch * e->zoom / 10;
		e->z2 = e->map[y][x + 1].z;
	}
	else
	{
		e->x2 = e->rotation2 * (xt - (yt + 1)) * (e->zoom);
		e->y2 = e->rotation * (xt + (yt + 1)) * (e->zoom);
		e->y2 -= e->map[y + 1][x].z * e->z_ch * e->zoom / 10;
		e->z2 = e->map[y + 1][x].z;
	}
	ft_recenter(e);
}
