/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 01:30:16 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/19 22:28:45 by copayanc         ###   ########.fr       */
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
while (str[i])
{
  ft_putchar(str[i]);
  i++;
  }
}

void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
    ft_putstr("-2147483648");
    return;
  }
  if(nb < 0)
  {
    nb = -nb;
    ft_putchar('-');
  }
  if (nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
    ft_putchar (nb + '0');
}
