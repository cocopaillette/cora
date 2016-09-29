/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_force.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 00:56:54 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 23:12:58 by mluttrin         ###   ########.fr       */
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
			tab[from.y + j][from.x + i] = full;
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
			if (tab[j + from.y][i + from.x] == obstacles)
			{
				return (-1);
			}
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

	if (len.x < len.y)
		size = len.x;
	else
		size = len.y;
	while (size > 0)
	{
		from.y = -1;
		while (++from.y + size < len.y)
		{
			from.x = -1;
			while (++from.x + size < len.x)
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
