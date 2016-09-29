/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 02:00:51 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 02:51:52 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int wd_match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j] != s1[i] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			break ;
		i++;
		j++;
	}
	if (s1[i] == '\0')
		return (1);
	else
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (wd_match(argv[1], argv[2]) == 1)
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return(0);
}
