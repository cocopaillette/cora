/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:17:37 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/16 01:33:36 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"
#define BUF_SIZE 40000

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar2(char c)
{
	write(2, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_putstr_2(int fd, char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		write(2, str, ft_strlen(str));
		i++;
	}
}

int	main(int argc, char **argv)
{
	int op;
	int ex;
	char buf[BUF_SIZE];

	op = open(argv[1], O_RDONLY);
	ex = read(op, buf, BUF_SIZE);
	if (argc == 2)
	{
		if (op == -1)
			return (1);
		buf[ex] = '\0';
ft_putstr_2(1, buf);
	if (close(op) == -1)
	{
		ft_putstr_2(1, "cannot open\n");
	}
		return (1);
	}
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
