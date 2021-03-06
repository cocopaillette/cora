/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 05:31:32 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/09 06:24:25 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] >= 65 && str[i] <= 74)
				str[i] = str[i] + 16;
			if (str[i] >= 75 && str[i] <= 90)
				str[i] = str[i] - 10;
			if (str[i] >= 97 && str[i] <= 106)
				str[i] = str[i] + 16;
			if (str[i] >= 107 && str[i] <= 122)
				str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
