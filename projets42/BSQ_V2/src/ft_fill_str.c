/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 19:24:06 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 22:09:26 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_fill_str(char *src, char buf[BUF_SIZE + 1], int size)
{
	char	*str;
	int		n;
	int		i;

	if (src == NULL)
		return (ft_strdup(buf));
	if ((str = malloc(sizeof(char) * (ft_strlen(src) + size + 1))) == NULL)
		return (NULL);
	n = -1;
	if (src != NULL)
	{
		while (src[++n] != '\0')
			str[n] = src[n];
		n = n - 1;
	}
	i = 0;
	while (i < size)
		str[++n] = buf[i++];
	str[++n] = '\0';
	return (str);
}
