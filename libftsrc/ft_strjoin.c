/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:35:02 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 18:35:21 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*new;

	if (!(s1))
		return (NULL);
	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < s1len)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2len)
		new[i++] = s2[j++];
	new[s1len + s2len] = '\0';
	return (new);
}
