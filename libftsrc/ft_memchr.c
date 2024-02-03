/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:53:43 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 17:59:06 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrstr;
	unsigned char	*firstch;

	ptrstr = (unsigned char *)s;
	firstch = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptrstr == (unsigned char)c)
		{
			firstch = ptrstr;
			return (firstch);
		}
		ptrstr++;
		n--;
	}
	return (0);
}
