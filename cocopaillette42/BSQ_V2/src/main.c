/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:40:05 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 23:38:21 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_define_dot_and_len(t_char *dot, t_coord *len, char *data)
{
	int i;

	if (data == NULL || *data == '\0')
	{
		write(2, "map error\n", 10);
		exit(1);
	}
	i = ft_strlen(data) - 1;
	if (i > 2)
	{
		dot->full = data[i];
		dot->obstacles = data[i - 1];
		dot->empty = data[i - 2];
		if (dot->full == dot->obstacles || dot->full == dot->empty ||
				dot->empty == dot->obstacles)
			ft_exit('\0');
		i = 0;
		while (data[i++] != dot->empty)
			len->y = ft_atoi(data);
	}
}

char	**ft_read(t_char *dot, t_coord *len, int fd)
{
	char	buf[BUF_SIZE + 1];
	char	*str;
	char	**tab;
	int		ret;
	char	*data;

	data = NULL;
	str = NULL;
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (data == NULL)
		{
			if (!(data = ft_strndup(buf)))
				return (NULL);
		}
		str = ft_fill_str(str, buf, ret);
	}
	ft_define_dot_and_len(dot, len, data);
	tab = ft_cut_in_line(str, "\n", len);
	return (tab);
}

void	ft_exit(char c)
{
	write(2, "map error\n", 10);
	exit(1);
	ft_putchar(c);
}

void	ft_read_in_files(int argc, char **argv)
{
	int			i;
	int			fd;
	char		**tab;
	t_char		dot;
	t_coord		len;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_exit('\n');
		tab = ft_read(&dot, &len, fd);
		if (tab == NULL)
			ft_exit('\n');
		if (ft_look_if_map_is_good(tab, dot) == -1)
			ft_exit('\0');
		ft_brute_force(tab, dot, len);
		ft_print_tab(tab);
		i++;
		if (i < argc)
			ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char		**tab;
	t_char		dot;
	t_coord		len;

	if (argc == 1)
	{
		tab = ft_read(&dot, &len, 0);
		if (tab == NULL)
			return (1);
		if (ft_look_if_map_is_good(tab, dot) == -1)
			ft_exit('\0');
		ft_brute_force(tab, dot, len);
		ft_print_tab(tab);
	}
	else
	{
		ft_read_in_files(argc, argv);
	}
	return (0);
}
