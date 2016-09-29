/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 04:28:53 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 08:23:14 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char			*val;
	unsigned int	i;

	i = 0;
	val = (char*)malloc(sizeof(*val) * (ft_strlen(src) + 1));
	ft_strcpy(val, src);
	return (val);
}

char	*ft_strndup(char *src)
{
	char			*val;
	unsigned int	i;

	i = 0;
	val = (char*)malloc(sizeof(*val) * (ft_len(src) + 1));
	while (src[i] != '\n')
	{
		val[i] = src[i];
		i++;
	}
	val[i] = '\0';
	ft_strcpy(src, src + i + 1);
	return (val);
}
