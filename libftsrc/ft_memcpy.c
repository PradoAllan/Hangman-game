/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:47:47 by aprado            #+#    #+#             */
/*   Updated: 2023/11/05 20:28:02 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	while (n > 0)
	{
		*ptrdest = *ptrsrc;
		ptrdest++;
		ptrsrc++;
		n--;
	}
	return (dest);
}
