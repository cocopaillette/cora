/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <mluttrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:40:05 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 10:16:16 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

void	ft_define_dot_and_len(t_char *dot, t_coord *len, char *data)
{
	int i;

	printf("%s\n", data);
	i = ft_strlen(data) - 1;
	if (i > 2)
	{
		dot->full = data[i];
		dot->obstacles = data[i - 1];
		dot->full = data[i - 2];
		len->y = ft_atoi(data);
	}
	else
		return ;
}

char	**ft_read(t_char *dot, t_coord *len)
{
	char	buf[BUF_SIZE + 1];
	char	*str;
	char	**tab;
	int		ret;
	char	*data;

	data = NULL;
	str = NULL;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (data == NULL)
		{
			if (!(data = ft_strndup(buf)))
				return (NULL);
		}
		str = ft_fill_str(str, buf, ret);
	}
	if (data == NULL)
		return (NULL);
	ft_define_dot_and_len(dot, len, data);
	tab = ft_cut_in_line(str, "\n", len);
	return (tab);
}

int		main(void)
{
	char		**tab;
	t_char		dot;
	t_coord		len;

	tab = ft_read(&dot, &len);
	if (tab == NULL)
		return (1);
	if (ft_look_if_map_is_good(tab, len, dot) == -1 ||
		ft_brute_force(tab, dot, len) == NULL)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	ft_print_tab(tab);
	return (0);
}
