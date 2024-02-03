/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:40:16 by aprado            #+#    #+#             */
/*   Updated: 2024/01/31 07:53:15 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new)
	{
		while (lst)
		{
			if (lst == NULL)
				lst->next = new;
			lst = lst->next;
		}
	}
}
*/

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
