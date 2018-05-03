/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 05:14:19 by gquerre           #+#    #+#             */
/*   Updated: 2016/12/18 05:17:50 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		k;
	int		u;

	i = 0;
	k = 0;
	if (!(s1) || !(s2))
		return (NULL);
	u = ft_strlen(s1) + ft_strlen(s2);
	if (!(mem = (char*)malloc(sizeof(char) * (u + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		mem[i + k] = s2[k];
		k++;
	}
	mem[i + k] = '\0';
	return (mem);
}
