/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:58:36 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 17:53:41 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (dest_len < size)
	{
		i = -1;
		while (src[++i] && i + 1 < size - dest_len)
			dst[dest_len + i] = src[i];
		dst[dest_len + i] = '\0';
		return (src_len + dest_len);
	}
	return (src_len + size);
}
