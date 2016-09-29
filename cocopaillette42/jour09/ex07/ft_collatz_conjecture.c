/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 07:30:54 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/09 16:09:11 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 0)
		return (0);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture(base * 3 + 1));
}

int				main(void)
{
	int i;

	i = 40;
	printf("%d", ft_collatz_conjecture(i));
	return (0);
}
