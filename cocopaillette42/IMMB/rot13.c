/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 02:09:02 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/20 01:15:04 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void rotone(char *str)
{
  int i;

  i = 0;
  while(str[i])
  {
    if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
    {
      str[i] = str[i] + 13;
      ft_putchar(str[i]);
    }
    else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
    {
      str[i] = str[i] - 13;
      ft_putchar(str[i]);
    }
    else
      ft_putchar(str[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_putchar('\n');
    return(0);
  }
  else
  {
    rotone(argv[1]);
    ft_putchar('\n');
  }
  return (0);
}
