/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 03:45:33 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 03:55:59 by copayanc         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

 char	*str_min(char *str)
 {
	 int i;

	 i = 0;
	 while (str[i])
	 {
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
	 	}
		i++;
 }
 return (str);
}

char *str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			str_min(argv[i]);
			str_capitalizer(argv[i]);
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
	ft_putchar('\n');
	return (0);
}
