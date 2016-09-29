/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_force.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 00:56:54 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 03:23:30 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_fill_map(t_coord from, int size, char **tab, char full)
{
	int		i;
	int		j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			tab[from.x + i][from.y + j] = full;
			i++;
		}
		j++;
	}
}

int		ft_check_map(t_coord from, int size, char **tab, char obstacles)
{
	int		i;
	int		j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i + from.x][j + from.y] == obstacles)
				return (-1);
			i++;
		}
		j++;
	}
	return (1);
}

char	**ft_brute_force(char **tab, t_char dot, t_coord len)
{
	int		size;
	t_coord	from;

	if (len.x > len.y)
		size = len.y;
	else
		size = len.x;
	while (size > 0)
	{
		from.x = -1;
		while (++from.x + size < len.x)
		{
			from.y = -1;
			while (++from.y + size < len.y)
			{
				if (ft_check_map(from, size, tab, dot.obstacles) != -1)
				{
					ft_fill_map(from, size, tab, dot.full);
					return (tab);
				}
			}
		}
		size--;
	}
	return (NULL);
}
