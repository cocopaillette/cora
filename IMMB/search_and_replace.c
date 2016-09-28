/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 08:25:48 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 21:40:58 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void search_and_replace(char *str, char search, char replace)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search)
		{
			str[i] = replace;
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
