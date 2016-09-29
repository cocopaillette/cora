/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:23:19 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 21:23:06 by copayanc         ###   ########.fr       */
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

void	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a' + 1;
			while (j--)
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A' + 1;
			while (j--)
			ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc > 1)
	{
		repeat_alpha(argv[1]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return(0);
}
