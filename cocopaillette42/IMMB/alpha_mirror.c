/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 01:25:56 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 01:53:17 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			str[i] = str[i] + 25 - 2 * (str[i] - 'a');
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'M')
		{
			str[i] = str[i] + 25 - 2 * (str[i] - 'A');
			ft_putchar(str[i]);
		}
	 else if (str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] = str[i] - 25 + 2 * ('z' - str[i]);
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			str[i] = str[i] - 25 + 2 * ('Z' - str[i]);
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return (0);
}
