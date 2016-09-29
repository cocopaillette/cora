/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 13:53:32 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/03 12:55:27 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		a;
	int		z;
	char	c;

	a = 0;
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	a--;
	z = 0;
	while (z < a)
	{
		c = str[z];
		str[z] = str[a];
		str[a] = c;
		z++;
		a--;
	}
	return (str);
}

int	main(void)
{   char str[] = "salut";
	printf("%s", ft_strrev(str));
		   return (0);
}
