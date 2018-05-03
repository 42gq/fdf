/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 01:14:55 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:39:45 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_color(t_env *e)
{
	if (e->color > 400 || e->color <= 0)
	{
		e->r = 235;
		e->b = 225;
		e->g = 225;
	}
	else if (e->color > 0 && e->color < 200)
	{
		e->r = 0;
		e->b = 305 - (((115 - e->color) * (115 - e->color)) / 23);
		e->g = 75 - (((170 - e->color) * (170 - e->color)) / 23);
	}
	else if (e->color >= 200)
	{
		e->r = 275 - (((300 - e->color) * (300 - e->color)) / 40);
		e->b = 0;
		e->g = 245 - (((200 - e->color) * (200 - e->color)) / 10);
	}
}
