/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:41:26 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 21:52:27 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ulstr(char *str)
{
	int i;

	i =0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			ft_putchar (str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
				str[i] = str[i] + 32;
				ft_putchar(str[i]);
		}
		else
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return (0);
}
