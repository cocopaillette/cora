/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:17:28 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/14 22:47:37 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if (begin_list)
	{
		elem = *begin_list;
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = elem;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	i = 0;
	list = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, (char **)av[i]);
		i++;
	}
	return (list);
}
