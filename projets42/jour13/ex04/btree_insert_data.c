/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 03:57:41 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/16 16:27:59 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	if (!root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) <= 0)
	{
		if ((*root)->right == 0)
		{
			(*root)->right = btree_create_node(item);
			return ;
		}
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
	else
	{
		if (!(*root)->item)
		{
			(*root)->item = item;
			return ;
		}
		btree_insert_data(&((*root)->left), item, cmpf);
	}
}
