/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:23:44 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 21:30:05 by copayanc         ###   ########.fr       */
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

void rev_print(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
			ft_putchar(str[i]);
			i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
