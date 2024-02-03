/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:58:55 by aprado            #+#    #+#             */
/*   Updated: 2024/01/31 07:57:53 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_qtd;

	node_qtd = 0;
	if (lst)
	{
		while (lst)
		{
			node_qtd++;
			lst = lst->next;
		}
	}
	return (node_qtd);
}
