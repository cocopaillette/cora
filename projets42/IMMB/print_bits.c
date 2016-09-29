/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:02:23 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/19 22:52:03 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if(octet & i)
			ft_putchar('1');
		else
			ft_putchar('0');
		i = i / 2;
	}
}

int main(void)
{
	print_bits(64);
	return (0);
}
