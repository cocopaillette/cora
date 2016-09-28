/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:38:06 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 01:00:13 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int tab[128] = {0};

	i = 0;
	while(s1[i])
	{
		if (tab[(int)s1[i]] == 0)
		{
			tab[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] == 0)
		{
			tab[(int)s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return (0);
}
