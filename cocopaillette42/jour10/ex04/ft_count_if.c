/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:12:19 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/13 15:27:26 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int tmp;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
		{
			tmp++;
			i++;
		}
	}
	return (tmp);
}
