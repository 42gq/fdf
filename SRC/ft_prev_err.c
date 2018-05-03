/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prev_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 03:46:12 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:41:43 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_error_fdf(int i)
{
	if (i == 1)
	{
		ft_putstr("Wrong File, Please check your file.\n");
		exit(0);
	}
	if (i == 2)
	{
		ft_putstr("Open failed.\n");
		exit(0);
	}
}
